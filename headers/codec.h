#pragma once
#include "common_includes.h"
#include "enumerates.h"
#include "structures.h"
/**
 * @file headers/codec.h
 * @brief headers/codec.h
 *
 * @ingroup sanctuary_notes
 * @{
 */

/** codec_decode decodes the given memory buffer in-place, and returns the number*/
/** of bytes decoded.*/
int __fastcall codec_decode(void *src_dst, int size, char *password);

/** j_sha1_reset resets the global SHA-1 contexts.*/
void j_sha1_reset();

/** codec_init_key initializes the codec key.*/
void __fastcall codec_init_key(int unused, char *password);

/** codec_get_encoded_len returns the length in bytes of the codec encoding of an*/
/** input buffer of length n.*/
int __fastcall codec_get_encoded_len(int n);

/** codec_encode encodes the given memory buffer in-place.*/
void __fastcall codec_encode(void *src_dst, int size, int size_64, char *password);

/** @} */