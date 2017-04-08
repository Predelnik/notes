#pragma once
#include "common_includes.h"
#include "enumerates.h"
#include "structures.h"
/**
 * @file headers/init.h
 * @brief headers/init.h
 *
 * @ingroup sanctuary_notes
 * @{
 */

/** init_cleanup terminates initialized resources.*/
void __fastcall init_cleanup(bool32_t show_cursor);

/** init_run_office_from_start_menu runs Microsoft Office from the Start Menu if*/
/** a process with the "MOM Parent" class has been identified and killed.*/
void init_run_office_from_start_menu();

/** init_run_office runs Microsoft Office if there exists a shortcut to it from*/
/** within the given directory.*/
void __fastcall init_run_office(char *dir);

/** init_disable_screensaver either disables or restores the previous state of*/
/** the screensaver, depending on the given boolean value.*/
void __fastcall init_disable_screensaver(bool32_t disable);

/** init_kill_mom_parent kills the "MOM Parent" process if present.*/
void init_kill_mom_parent();

/** init_find_mom_parent attempts to locate the "MOM Parent" process and return*/
/** its window handle.*/
HWND init_find_mom_parent();

/** init_await_mom_parent_exit waits up to 4 seconds for the "MOM Parent" process*/
/** to exit.*/
void init_await_mom_parent_exit();

/** init_trim_trailing_slash removes up to one trailing slash characters from*/
/** path.*/
char * __fastcall init_strip_trailing_slash(char *path);

/** init_get_file_info retrieves the game path and version number from the*/
/** executable.*/
void init_get_file_info();

/** @} */