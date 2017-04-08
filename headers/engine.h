#pragma once
#include "common_includes.h"
#include "enumerates.h"
#include "structures.h"
/**
 * @file headers/engine.h
 * @brief headers/engine.h
 *
 * @ingroup sanctuary_notes
 * @{
 */

/** engine_set_seed sets the global seed to x.*/
/***/
/** PSX ref: 0x8003DACC*/
/** PSX def: void SetRndSeed__Fl(long s)*/
void __fastcall engine_set_seed(int32_t x);

/** engine_rand returns a non-negative pseudo-random integer in [0, 2^31), using*/
/** the Borland C/C++ pseudo-random number generator algorithm with a multiplier*/
/** of 0x15A4E35 and an increment of 1.*/
/***/
/** PSX ref: 0x8003DADC*/
/** PSX def: long GetRndSeed__Fv()*/
int32_t engine_rand();

/** engine_rand_cap returns a capped non-negative pseudo-random integer in*/
/** [0, max), using the Borland C/C++ pseudo-random number generator algorithm*/
/** with a multiplier of 0x15A4E35 and an increment of 1.*/
/***/
/** PSX ref: 0x8003DB24*/
/** PSX def: long ENG_random__Fl(long v)*/
int32_t __fastcall engine_rand_cap(int unused, int32_t max);

/** engine_init_mem_mutex initializes the memory mutex.*/
void engine_init_mem_mutex();

/** engine_cleanup_mem_mutex_atexit terminates the memory mutex at exit.*/
void engine_cleanup_mem_mutex_atexit();

/** engine_cleanup_mem_mutex terminates the memory mutex.*/
void engine_cleanup_mem_mutex();

/** engine_mem_alloc allocates a memory space of the given size.*/
void * __fastcall engine_mem_alloc(int size);

/** engine_mem_free frees the given memory space.*/
void __fastcall engine_mem_free(void *ptr);

/** engine_mem_load_file returns the contents of the given file.*/
/***/
/** PSX ref: 0x80074E9C*/
/** PSX def: unsigned char* GRL_LoadFileInMemSig__FPCcPUl(char *Name, unsigned long *Len)*/
void * __fastcall engine_mem_load_file(char *file_path, int *size);

/** engine_mem_load_file_with loads the given file into the provided memory*/
/** buffer.*/
void __fastcall engine_mem_load_file_with(char *path, void *buf);

/** @} */