#pragma once
#include "common_includes.h"
#include "enumerates.h"
#include "structures.h"
/**
 * @file headers/towners.h
 * @brief headers/towners.h
 *
 * @ingroup sanctuary_notes
 * @{
 */

/** towners_get_num_from_id returns the towner number (towners array index) of*/
/** the given towner ID.*/
int __fastcall towners_get_num_from_id(towner_id towner_id);

/** towners_init_graphics initializes the NPC graphics for each direction.*/
void __fastcall towners_init_graphics(void *towner_cel, void **cel_from_direction);

/** towners_init_anim initializes the animation of the given NPC.*/
void __fastcall towners_init_anim(int towner_num, void *active_cel, int nframes, int nticks_per_frame);

/** towners_place places the given NPC on the map.*/
void __fastcall towners_place(int towner_num, int frame_width, bool32_t targetable, towner_id towner_id, int col, int row, towner_anim_seq_id towner_anim_seq_id, int unused);

/** towners_init_gossip initializes quest gossip of the given NPC.*/
void __fastcall towners_init_gossip(int towner_num);

/** towners_init_griswold initializes Griswold the Blacksmith.*/
void towners_init_griswold();

/** towners_init_odgen initializes Ogden the Tavern owner.*/
void towners_init_odgen();

/** towners_init_wounded_townsman initializes the Wounded Townsman.*/
void towners_init_wounded_townsman();

/** towners_init_adria initializes Adria the Witch.*/
void towners_init_adria();

/** towners_init_gillian initializes Gillian the Barmaid.*/
void towners_init_gillian();

/** towners_init_wirt initializes Wirt the Peg-legged boy.*/
void towners_init_wirt();

/** towners_init_pepin initializes Pepin the Healer.*/
void towners_init_pepin();

/** towners_init_cain initializes Cain the Elder.*/
void towners_init_cain();

/** towners_init_farnham initializes Farnham the Drunk.*/
void towners_init_farnham();

/** towners_init_cows initializes the Cow NPCs.*/
void towners_init_cows();

/** towners_init initializes the NPCs of Tristram.*/
void towners_init();

/** towners_cleanup releases resources used by NPCs.*/
void towners_cleanup();

/** towners_stop_interaction stops interaction with distant players.*/
void __fastcall towners_stop_interaction(int towner_num);

/** towners_update_logic_griswold updates the logic of Griswold each game tick;*/
/** stops interaction with distant players.*/
void towners_update_logic_griswold();

/** towners_update_logic_ogden updates the logic of Ogden each game tick; stops interaction with distant players.*/
void towners_update_logic_ogden();

/** towners_update_logic_wounded_townsman updates the logic of the Wounded*/
/** Townsman each game tick; stops interaction with distant players, and updates*/
/** quest events.*/
void towners_update_logic_wounded_townsman();

/** towners_update_logic_pepin updates the logic of Pepin each game tick; stops*/
/** interaction with distant players.*/
void towners_update_logic_pepin();

/** towners_update_logic_cain updates the logic of Cain each game tick; stops*/
/** interaction with distant players.*/
void towners_update_logic_cain();

/** towners_update_logic_farnham updates the logic of Farnham each game tick; stops interaction with distant players.*/
void towners_update_logic_farnham();

/** towners_update_logic_wirt updates the logic of Wirt each game tick; stops*/
/** interaction with distant players.*/
void towners_update_logic_wirt();

/** towners_update_logic_adria updates the logic of Adria each game tick; stops*/
/** interaction with distant players.*/
void towners_update_logic_adria();

/** towners_update_logic_gillian updates the logic of Gillain each game tick;*/
/** stops interaction with distant players.*/
void towners_update_logic_gillian();

/** towners_update_logic_cow updates the logic of the Cows each game tick; stops interaction with distant players.*/
void towners_update_logic_cows();

/** towners_update updates the logic and graphics of NPCs each game tick.*/
void towners_update();

/** towners_greeting initiates the given NPC greeting.*/
void __fastcall towners_greeting(speech_id speech_id);

/** @} */