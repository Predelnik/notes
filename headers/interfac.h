#pragma once
#include "common_includes.h"
#include "enumerates.h"
#include "structures.h"
/**
 * @file headers/interfac.h
 * @brief headers/interfac.h
 *
 * @ingroup sanctuary_notes
 * @{
 */

/** interfac_inc_progress increments the loading progress and renders the active*/
/** cut scene on screen.*/
bool32_t interfac_inc_progress();

/** interfac_draw_cut_scene renders the active cut scene on screen.*/
void interfac_draw_cut_scene();

/** @} */