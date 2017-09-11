/**
 * @file
 *
 * @author jeff.daily@pnnl.gov
 *
 * Copyright (c) 2015 Battelle Memorial Institute.
 */
#include "config.h"

/* strdup needs _POSIX_C_SOURCE 200809L */
#define _POSIX_C_SOURCE 200809L

#include <errno.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#if defined(_MSC_VER)
#include <io.h>
#define READ_FUNCTION _read
#else
#define READ_FUNCTION read
#endif

#include <kseq.h>

#if HAVE_ZLIB
#include <zlib.h>
KSEQ_INIT(gzFile, gzread)
#else
KSEQ_INIT(int, READ_FUNCTION)
#endif

#include "parasail.h"
#include "parasail/io.h"

parasail_sequences_t* parasail_sequences_from_file(const char *filename)
{
#if HAVE_ZLIB
    gzFile fp;
#else
    FILE* fp;
#endif
    kseq_t *seq = NULL;
    int l = 0;
    parasail_sequences_t *retval = NULL;
    parasail_sequence_t *sequences = NULL;
    unsigned long count = 0;
    unsigned long capacity = 1000;

    retval = (parasail_sequences_t*)malloc(sizeof(parasail_sequences_t));
    if (NULL == retval) {
        perror("malloc");
        exit(1);
    }
    sequences = (parasail_sequence_t*)malloc(sizeof(parasail_sequence_t) * capacity);
    if (NULL == sequences) {
        perror("malloc");
        exit(1);
    }

    /* open the file */
    errno = 0;
#if HAVE_ZLIB
    fp = gzopen(filename, "r");
    if (fp == Z_NULL) {
        perror("gzopen");
        exit(1);
    }
#else
    fp = fopen(filename, "r");
    if (fp == NULL) {
        perror("fopen");
        exit(1);
    }
#endif
    
    /* initialize kseq structures */
#if HAVE_ZLIB
    seq = kseq_init(fp);
#else
    seq = kseq_init(fileno(fp));
#endif

    /* parse file */
    while ((l = kseq_read(seq)) >= 0) {
        errno = 0;
        sequences[count].name.l = seq->name.l;
        sequences[count].comment.l = seq->comment.l;
        sequences[count].seq.l = seq->seq.l;
        sequences[count].qual.l = seq->qual.l;

        if (sequences[count].name.l) {
            sequences[count].name.s = strdup(seq->name.s);
            if (NULL == sequences[count].name.s) {
                perror("strdup name");
                exit(1);
            }
        }
        if (sequences[count].comment.l) {
            sequences[count].comment.s = strdup(seq->comment.s);
            if (NULL == sequences[count].comment.s) {
                perror("strdup comment");
                exit(1);
            }
        }
        if (sequences[count].seq.l) {
            sequences[count].seq.s = strdup(seq->seq.s);
            if (NULL == sequences[count].seq.s) {
                perror("strdup seq");
                exit(1);
            }
        }
        if (sequences[count].qual.l) {
            sequences[count].qual.s = strdup(seq->qual.s);
            if (NULL == sequences[count].qual.s) {
                perror("strdup qual");
                exit(1);
            }
        }
        ++count;

        /* allocate more space for sequences if we ran out */
        if (count >= capacity) {
            parasail_sequence_t *new_sequences = NULL;
            capacity *= 2;
            errno = 0;
            new_sequences = (parasail_sequence_t*)realloc(sequences, sizeof(parasail_sequence_t) * capacity);
            if (NULL == new_sequences) {
                perror("realloc");
                exit(1);
            }
            sequences = new_sequences;
            errno = 0;
        }
    }
    kseq_destroy(seq);
#if HAVE_ZLIB
    gzclose(fp);
#else
    fclose(fp);
#endif

    retval->seqs = sequences;
    retval->l = count;

    return retval;
}

void parasail_sequences_free(parasail_sequences_t *sequences)
{
    size_t i;
    for (i=0; i<sequences->l; ++i) {
        if (sequences->seqs[i].name.s)    free(sequences->seqs[i].name.s);
        if (sequences->seqs[i].comment.s) free(sequences->seqs[i].comment.s);
        if (sequences->seqs[i].seq.s)     free(sequences->seqs[i].seq.s);
        if (sequences->seqs[i].qual.s)    free(sequences->seqs[i].qual.s);
    }
    free(sequences);
}

