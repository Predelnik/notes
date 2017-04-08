#pragma once
#include "common_includes.h"
#include "enumerates.h"
#include "structures.h"
/**
 * @file headers/encrypt.h
 * @brief headers/encrypt.h
 *
 * @ingroup sanctuary_notes
 * @{
 */

/** encrypt_hash returns the hash of the given string.*/
uint32_t __fastcall encrypt_hash(char *s, int type);

/** encrypt_init_lookup_table initializes the lookup table used for hashing with*/
/** pseudo-random numbers based on an LCG with a=125, c=3 and m=0x2AAAAB.*/
void encrypt_init_lookup_table();

/** @} */