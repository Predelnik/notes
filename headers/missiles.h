#pragma once
#include "common_includes.h"
#include "enumerates.h"
#include "structures.h"
/**
 * @file headers/missiles.h
 * @brief headers/missiles.h
 *
 * @ingroup sanctuary_notes
 * @{
 */

/** missiles_get_spell_damage retrieves the min and max spell damage of the*/
/** given spell.*/
void __fastcall missiles_get_spell_damage(spell_id spell_id, int *damage_min, int *damage_max);

/** @} */