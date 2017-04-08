#pragma once
#include "common_includes.h"
#include "enumerates.h"
#include "structures.h"
/**
 * @file headers/pfile.h
 * @brief headers/pfile.h
 *
 * @ingroup sanctuary_notes
 * @{
 */

/** j_pfile_cpp_init initializes the C++ runtime of pfile.cpp.*/
void j_pfile_cpp_init();

/** pfile_cpp_init initializes the C++ runtime of pfile.cpp.*/
void pfile_cpp_init();

/** pfile_init_save_directory initializes the save directory.*/
void pfile_init_save_directory();

/** pfile_check_free_space validates that the hard drive of the given directory*/
/** has at least 10 MB free space available.*/
void __fastcall pfile_check_available_space(char *dir);

/** pfile_get_save_num_from_name returns the save number for the given character*/
/** name.*/
int __fastcall pfile_get_save_num_from_name(char *name);

/** pfile_get_save_path retrieves the save path for the given save number.*/
void __fastcall pfile_get_save_path(char *save_path, int size, int save_num);

/** pfile_delete_save deletes the save file of the given character.*/
bool32_t __stdcall pfile_delete_save(HeroInfo *hero_info);

/** pfile_strcpy copies the source string to the destination buffer.*/
void __fastcall pfile_strcpy(char *dst, char *src);

/** @} */