#ifndef PQCLEAN_MCELIECE6960119_AVX_SK_GEN_H
#define PQCLEAN_MCELIECE6960119_AVX_SK_GEN_H
/*
  This file is for secret-key generation
*/


#include "gf.h"

#include <stdint.h>

int PQCLEAN_MCELIECE6960119_AVX_genpoly_gen(gf * /*out*/, gf * /*f*/);
int PQCLEAN_MCELIECE6960119_AVX_perm_check(const uint32_t * /*p*/);

#endif
