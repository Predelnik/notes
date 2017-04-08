#pragma once
#include "common_includes.h"
#include "enumerates.h"
#include "structures.h"
/**
 * @file headers/town.h
 * @brief headers/town.h
 *
 * @ingroup sanctuary_notes
 * @{
 */

/** town_draw_game renders the game world in town on screen.*/
void __fastcall town_draw_game(int col, int row);

/** town_draw_zoomed_game renders a zoomed-in version of the game world in town*/
/** on screen.*/
void __fastcall town_draw_zoomed_game(int col, int row);

/** town_draw renders the UI and the game world in town on screen.*/
void __fastcall town_draw(int col, int row);

/** @} */