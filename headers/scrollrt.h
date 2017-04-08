#pragma once
#include "common_includes.h"
#include "enumerates.h"
#include "structures.h"
/**
 * @file headers/scrollrt.h
 * @brief headers/scrollrt.h
 *
 * @ingroup sanctuary_notes
 * @{
 */

/** scrollrt_draw renders the UI and the game world in dungeons on screen.*/
void __fastcall scrollrt_draw(int col, int row);

/** scrollrt_draw_game renders the game world in dungeons on screen.*/
void __fastcall scrollrt_draw_game(int col, int row);

/** scrollrt_draw_zoomed_game renders a zoomed-in version of the game world in*/
/** dungeons on screen.*/
void __fastcall scrollrt_draw_zoomed_game(int col, int row);

/** @} */