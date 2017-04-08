#pragma once
#include "common_includes.h"
#include "enumerates.h"
#include "structures.h"
/**
 * @file headers/quests.h
 * @brief headers/quests.h
 *
 * @ingroup sanctuary_notes
 * @{
 */

/** quests_is_active reports whether the given quest is active.*/
/***/
/** PSX ref: 0x80067B70*/
/** PSX def: unsigned char QuestStatus__Fi(int i)*/
/***/
/** NOTE: quest_num and quest_id are equivalent, as indicated by this function.*/
bool32_t __fastcall quests_is_active(quest_id quest_num);

/** quests_draw renders the quest log on screen.*/
void quests_draw_quest_log();

/** @} */