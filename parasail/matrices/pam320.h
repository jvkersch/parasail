/**
 * @file
 *
 * @author jeff.daily@pnnl.gov
 *
 * Copyright (c) 2014 Battelle Memorial Institute.
 *
 * All rights reserved. No warranty, explicit or implicit, provided.
 *
 * This file was converted to C code from the raw file found at
 * ftp://ftp.cbi.pku.edu.cn/pub/software/blast/matrices/PAM320, the
 * Center for Bioinformatics, Peking University, China.
 */
#ifndef _PARASAIL_PAM320_H_
#define _PARASAIL_PAM320_H_

#include "parasail.h"
#include "pam_map.h"

/* # */
/* # This matrix was produced by "pam" Version 1.0.6 [28-Jul-93] */
/* # */
/* # PAM 320 substitution matrix, scale = ln(2)/4 = 0.173287 */
/* # */
/* # Expected score = -0.741, Entropy = 0.224 bits */
/* # */
/* # Lowest score = -8, Highest score = 22 */
/* # */

static const int8_t parasail_pam320_[] = {
/*        A   R   N   D   C   Q   E   G   H   I   L   K   M   F   P   S   T   W   Y   V   B   Z   X   * */
/* A */   1, -1,  0,  1, -2,  0,  0,  1, -1,  0, -2, -1, -1, -4,  1,  1,  1, -6, -4,  0,  0,  0,  0, -8,
/* R */  -1,  6,  0, -1, -4,  1, -1, -2,  2, -2, -3,  4,  0, -5,  0,  0, -1,  3, -4, -2,  0,  0, -1, -8,
/* N */   0,  0,  2,  2, -4,  1,  2,  1,  2, -2, -3,  1, -2, -4,  0,  1,  0, -4, -2, -2,  2,  1,  0, -8,
/* D */   1, -1,  2,  4, -5,  2,  3,  1,  1, -2, -4,  0, -2, -6,  0,  0,  0, -7, -5, -2,  3,  3, -1, -8,
/* C */  -2, -4, -4, -5, 15, -5, -5, -3, -4, -2, -6, -6, -5, -4, -3,  0, -2, -8,  1, -2, -4, -5, -3, -8,
/* Q */   0,  1,  1,  2, -5,  4,  2, -1,  3, -2, -2,  1, -1, -5,  0,  0,  0, -5, -4, -2,  2,  3,  0, -8,
/* E */   0, -1,  2,  3, -5,  2,  4,  1,  1, -2, -3,  0, -2, -5,  0,  0,  0, -7, -5, -2,  3,  3,  0, -8,
/* G */   1, -2,  1,  1, -3, -1,  1,  5, -2, -2, -4, -1, -3, -5,  0,  1,  0, -7, -5, -1,  1,  0, -1, -8,
/* H */  -1,  2,  2,  1, -4,  3,  1, -2,  6, -2, -2,  0, -2, -2,  0, -1, -1, -3,  0, -2,  1,  2,  0, -8,
/* I */   0, -2, -2, -2, -2, -2, -2, -2, -2,  4,  3, -2,  2,  1, -2, -1,  0, -5, -1,  4, -2, -2,  0, -8,
/* L */  -2, -3, -3, -4, -6, -2, -3, -4, -2,  3,  7, -3,  4,  3, -2, -3, -2, -2,  0,  2, -3, -3, -1, -8,
/* K */  -1,  4,  1,  0, -6,  1,  0, -1,  0, -2, -3,  5,  0, -5, -1,  0,  0, -3, -5, -2,  1,  1, -1, -8,
/* M */  -1,  0, -2, -2, -5, -1, -2, -3, -2,  2,  4,  0,  6,  1, -2, -1, -1, -4, -2,  2, -2, -2,  0, -8,
/* F */  -4, -5, -4, -6, -4, -5, -5, -5, -2,  1,  3, -5,  1, 11, -5, -3, -3,  1,  9, -1, -5, -5, -2, -8,
/* P */   1,  0,  0,  0, -3,  0,  0,  0,  0, -2, -2, -1, -2, -5,  6,  1,  1, -6, -5, -1,  0,  0,  0, -8,
/* S */   1,  0,  1,  0,  0,  0,  0,  1, -1, -1, -3,  0, -1, -3,  1,  1,  1, -3, -3, -1,  1,  0,  0, -8,
/* T */   1, -1,  0,  0, -2,  0,  0,  0, -1,  0, -2,  0, -1, -3,  1,  1,  2, -5, -3,  0,  0,  0,  0, -8,
/* W */  -6,  3, -4, -7, -8, -5, -7, -7, -3, -5, -2, -3, -4,  1, -6, -3, -5, 22,  1, -6, -6, -6, -4, -8,
/* Y */  -4, -4, -2, -5,  1, -4, -5, -5,  0, -1,  0, -5, -2,  9, -5, -3, -3,  1, 12, -2, -3, -4, -2, -8,
/* V */   0, -2, -2, -2, -2, -2, -2, -1, -2,  4,  2, -2,  2, -1, -1, -1,  0, -6, -2,  4, -2, -2,  0, -8,
/* B */   0,  0,  2,  3, -4,  2,  3,  1,  1, -2, -3,  1, -2, -5,  0,  1,  0, -6, -3, -2,  2,  2,  0, -8,
/* Z */   0,  0,  1,  3, -5,  3,  3,  0,  2, -2, -3,  1, -2, -5,  0,  0,  0, -6, -4, -2,  2,  3,  0, -8,
/* X */   0, -1,  0, -1, -3,  0,  0, -1,  0,  0, -1, -1,  0, -2,  0,  0,  0, -4, -2,  0,  0,  0, -1, -8,
/* * */  -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8,  1
};

static const int parasail_pam320__[24][24] = {
/*        A   R   N   D   C   Q   E   G   H   I   L   K   M   F   P   S   T   W   Y   V   B   Z   X   * */
/* A */{  1, -1,  0,  1, -2,  0,  0,  1, -1,  0, -2, -1, -1, -4,  1,  1,  1, -6, -4,  0,  0,  0,  0, -8},
/* R */{ -1,  6,  0, -1, -4,  1, -1, -2,  2, -2, -3,  4,  0, -5,  0,  0, -1,  3, -4, -2,  0,  0, -1, -8},
/* N */{  0,  0,  2,  2, -4,  1,  2,  1,  2, -2, -3,  1, -2, -4,  0,  1,  0, -4, -2, -2,  2,  1,  0, -8},
/* D */{  1, -1,  2,  4, -5,  2,  3,  1,  1, -2, -4,  0, -2, -6,  0,  0,  0, -7, -5, -2,  3,  3, -1, -8},
/* C */{ -2, -4, -4, -5, 15, -5, -5, -3, -4, -2, -6, -6, -5, -4, -3,  0, -2, -8,  1, -2, -4, -5, -3, -8},
/* Q */{  0,  1,  1,  2, -5,  4,  2, -1,  3, -2, -2,  1, -1, -5,  0,  0,  0, -5, -4, -2,  2,  3,  0, -8},
/* E */{  0, -1,  2,  3, -5,  2,  4,  1,  1, -2, -3,  0, -2, -5,  0,  0,  0, -7, -5, -2,  3,  3,  0, -8},
/* G */{  1, -2,  1,  1, -3, -1,  1,  5, -2, -2, -4, -1, -3, -5,  0,  1,  0, -7, -5, -1,  1,  0, -1, -8},
/* H */{ -1,  2,  2,  1, -4,  3,  1, -2,  6, -2, -2,  0, -2, -2,  0, -1, -1, -3,  0, -2,  1,  2,  0, -8},
/* I */{  0, -2, -2, -2, -2, -2, -2, -2, -2,  4,  3, -2,  2,  1, -2, -1,  0, -5, -1,  4, -2, -2,  0, -8},
/* L */{ -2, -3, -3, -4, -6, -2, -3, -4, -2,  3,  7, -3,  4,  3, -2, -3, -2, -2,  0,  2, -3, -3, -1, -8},
/* K */{ -1,  4,  1,  0, -6,  1,  0, -1,  0, -2, -3,  5,  0, -5, -1,  0,  0, -3, -5, -2,  1,  1, -1, -8},
/* M */{ -1,  0, -2, -2, -5, -1, -2, -3, -2,  2,  4,  0,  6,  1, -2, -1, -1, -4, -2,  2, -2, -2,  0, -8},
/* F */{ -4, -5, -4, -6, -4, -5, -5, -5, -2,  1,  3, -5,  1, 11, -5, -3, -3,  1,  9, -1, -5, -5, -2, -8},
/* P */{  1,  0,  0,  0, -3,  0,  0,  0,  0, -2, -2, -1, -2, -5,  6,  1,  1, -6, -5, -1,  0,  0,  0, -8},
/* S */{  1,  0,  1,  0,  0,  0,  0,  1, -1, -1, -3,  0, -1, -3,  1,  1,  1, -3, -3, -1,  1,  0,  0, -8},
/* T */{  1, -1,  0,  0, -2,  0,  0,  0, -1,  0, -2,  0, -1, -3,  1,  1,  2, -5, -3,  0,  0,  0,  0, -8},
/* W */{ -6,  3, -4, -7, -8, -5, -7, -7, -3, -5, -2, -3, -4,  1, -6, -3, -5, 22,  1, -6, -6, -6, -4, -8},
/* Y */{ -4, -4, -2, -5,  1, -4, -5, -5,  0, -1,  0, -5, -2,  9, -5, -3, -3,  1, 12, -2, -3, -4, -2, -8},
/* V */{  0, -2, -2, -2, -2, -2, -2, -1, -2,  4,  2, -2,  2, -1, -1, -1,  0, -6, -2,  4, -2, -2,  0, -8},
/* B */{  0,  0,  2,  3, -4,  2,  3,  1,  1, -2, -3,  1, -2, -5,  0,  1,  0, -6, -3, -2,  2,  2,  0, -8},
/* Z */{  0,  0,  1,  3, -5,  3,  3,  0,  2, -2, -3,  1, -2, -5,  0,  0,  0, -6, -4, -2,  2,  3,  0, -8},
/* X */{  0, -1,  0, -1, -3,  0,  0, -1,  0,  0, -1, -1,  0, -2,  0,  0,  0, -4, -2,  0,  0,  0, -1, -8},
/* * */{ -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8, -8,  1}
};

static const parasail_matrix_t parasail_pam320 = {
    "pam320",
    parasail_pam320_,
    parasail_pam320__,
    parasail_pam_map,
    24
};

#endif /* _PARASAIL_PAM320_H_ */