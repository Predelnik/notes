#pragma once
#include "common_includes.h"
#include "enumerates.h"
#include "structures.h"
/**
 * @file headers/diablo.h
 * @brief headers/diablo.h
 *
 * @ingroup sanctuary_notes
 * @{
 */

/** diablo_cleanup_level releases the resources of the current level.*/
void diablo_cleanup_level();

/** diablo_parse_flags parses command-line flags from the given command line arguments.*/
void __fastcall diablo_parse_flags(char *args);

/** diablo_reload_process reloads the diablo.exe process in order to obstruct*/
/** debugging attempts.*/
void __fastcall diablo_reload_process(HMODULE hModule);

/** diablo_load_level_graphics loads the tile graphics of the active dungeon*/
/** type.*/
void diablo_load_level_graphics();

/** @} */