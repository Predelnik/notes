#pragma once
#include "common_includes.h"
#include "enumerates.h"
#include "structures.h"
/**
 * @file headers/inv.h
 * @brief headers/inv.h
 *
 * @ingroup sanctuary_notes
 * @{
 */

/** inv_cleanup releases the resources used by the inventory.*/
void inv_cleanup();

/** inv_load_graphics loads the inventory graphics of the active player class.*/
void inv_load_graphics();

/** inv_draw_inventory renders the inventory on screen.*/
void inv_draw_inventory();

/** inv_draw_belt renders the belt on screen.*/
void inv_draw_belt();

/** @} */