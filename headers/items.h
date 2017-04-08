#pragma once
#include "common_includes.h"
#include "enumerates.h"
#include "structures.h"
/**
 * @file headers/items.h
 * @brief headers/items.h
 *
 * @ingroup sanctuary_notes
 * @{
 */

/** items_load_drop_graphics loads item drop graphics and initializes the*/
/** tracking of dropped unique items.*/
void items_load_drop_graphics();

/** items_gen_seed generates a seed for the given item, distinct from the seed*/
/** values of all other active items.*/
void __fastcall items_gen_seed(int player_num, int32_t *item_seed);

/** items_get_rand_loot_id_from_monster returns the loot ID of a random item*/
/** drop from the monster.*/
/***/
/** The loot ID is positive for regular items and negative for unique items, as*/
/** further described by the following pseudo-code.*/
/***/
/**    switch {*/
/**    case loot_id > 0:*/
/**       // regular item drop.*/
/**       item_id = loot_id - 1*/
/**    case loot_id < 0:*/
/**       // unique item drop.*/
/**       unique_item_id = -loot_id - 1*/
/**    case loot_id == 0:*/
/**       // no item drop.*/
/**    }*/
/***/
/** The drops are calculated as follows.*/
/***/
/**    * Winged Fiends (i.e. Fiend, Blink, Gloom and Familiar) never drop items.*/
/**    * The Butcher always drops The Butcher's Cleaver.*/
/**    * Skeleton King always drops The Undead Crown.*/
/***/
/**    1) rnd(100) > 40: no drop*/
/**    2) rnd(100) > 25: drop gold*/
/**    3) Drop a random item with qlvl <= mlvl*/
/**       - The drop rate of an item determines if it has non-existant, regular*/
/**         or double chance of dropping.*/
/**       - In single player, items with the Resurrect or the Heal Other spell*/
/**         never drop.*/
int __fastcall items_get_rand_loot_id_from_monster(int monster_num);

/** items_draw_unique_item_box renders the unique item box on screen.*/
void items_draw_unique_item_box();

/** items_is_equipable reports whether the given item is equipable.*/
bool32_t __fastcall items_is_equipable(Item *item);

/** items_create_base_gold creates the base gold item.*/
void items_create_base_gold();

/** items_update_stores_equipable updates the equipability of store owner items.*/
void items_update_stores_equipable();

/** @} */