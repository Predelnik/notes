#pragma once
#include "common_includes.h"
#include "enumerates.h"
#include "structures.h"
/**
 * @file headers/loadsave.h
 * @brief headers/loadsave.h
 *
 * @ingroup sanctuary_notes
 * @{
 */

/** loadsave_load_int8 loads the next 8-bit integer from the active save.*/
int8_t loadsave_load_int8();

/** loadsave_load_int32 loads the next 32-bit integer from the active save.*/
int32_t loadsave_load_int32();

/** loadsave_load_int32_2 loads the next 32-bit integer from the active save.*/
int32_t loadsave_load_int32_2();

/** loadsave_load_bool loads the next 8-bit boolean from the active save.*/
bool32_t loadsave_load_bool();

/** loadsave_load_player loads the next player from the active save.*/
void __fastcall loadsave_load_player(int player_num);

/** loadsave_load_monster loads the next monster from the active save.*/
void __fastcall loadsave_load_monster(int monster_num);

/** loadsave_load_missile loads the next missile from the active save.*/
void __fastcall loadsave_load_missile(int missile_num);

/** loadsave_load_object loads the next object from the active save.*/
void __fastcall loadsave_load_object(int object_num);

/** loadsave_load_item loads the next item from the active save.*/
void __fastcall loadsave_load_item(int item_num);

/** loadsave_load_griswold_premium_item loads the next Griswold premium item*/
/** from the active save.*/
void __fastcall loadsave_load_griswold_premium_item(int griswold_premium_item_num);

/** loadsave_load_quest loads the next quest, quest start coordinates, quest*/
/** dlvl, quest dtype, and quest doom timer from the active save.*/
void __fastcall loadsave_load_quest(int quest_num);

/** @} */