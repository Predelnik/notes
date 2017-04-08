#pragma once
#include "common_includes.h"
#include "enumerates.h"
#include "structures.h"
/**
 * @file headers/sha1.h
 * @brief headers/sha1.h
 *
 * @ingroup sanctuary_notes
 * @{
 */

/** sha1_reset resets the global SHA-1 contexts.*/
void sha1_reset();

/** sha1_final copies the message digest of the given SHA-1 context to dst.*/
void __fastcall sha1_final(int ctx_id, uint8_t (*dst)[20]);

/** sha1 adds the 64-byte block of data to the running hash of the given SHA-1*/
/** context and stores the final message digest in dst.*/
void __fastcall sha1(int ctx_id, const uint8_t *data, uint8_t (*dst)[20]);

/** sha1_update adds the data to the running hash of the given SHA-1 context.*/
void __fastcall sha1_update(Sha1Ctx *ctx, const uint8_t *data, int len);

/** sha1_transform performs a SHA-1 transformation on the 64-byte block of the*/
/** given SHA-1 context.*/
void __fastcall sha1_transform(Sha1Ctx *ctx);

/** sha1_init initializes the given SHA-1 context.*/
void __fastcall sha1_init(int ctx_id);

/** @} */