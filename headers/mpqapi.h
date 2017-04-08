#pragma once
#include "common_includes.h"
#include "enumerates.h"
#include "structures.h"
/**
 * @file headers/mpqapi.h
 * @brief headers/mpqapi.h
 *
 * @ingroup sanctuary_notes
 * @{
 */

/** j_mpqapi_cpp_init initializes the C++ runtime of mpqapi.cpp.*/
void j_mpqapi_cpp_init();

/** mpqapi_cpp_init initializes the C++ runtime of mpqapi.cpp.*/
void mpqapi_cpp_init();

/** mpqapi_set_hidden sets the visibility of the given save file.*/
bool32_t __fastcall mpqapi_set_hidden(char *save_path, bool32_t hidden);

/** @} */