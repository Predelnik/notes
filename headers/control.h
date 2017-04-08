#pragma once
#include "common_includes.h"
#include "enumerates.h"
#include "structures.h"
/**
 * @file headers/control.h
 * @brief headers/control.h
 *
 * @ingroup sanctuary_notes
 * @{
 */

/** control_draw_speedbook renders the speedbook on screen.*/
void control_draw_speedbook();

/** control_draw_life_orb renders the life orb on screen.*/
void control_draw_life_orb();

/** control_draw_mana_orb renders the mana orb on screen.*/
void control_draw_mana_orb();

/** control_load_graphics loads control panel graphics.*/
void control_load_graphics();

/** control_draw_panel_buttons renders the control panel buttons on screen.*/
void control_draw_panel_buttons();

/** control_cleanup releases the resources used by the control panel.*/
void control_cleanup();

/** control_draw_description_box renders the description box on screen.*/
void control_draw_description_box();

/** control_draw_character_screen renders the character screen on screen.*/
void control_draw_character_screen();

/** control_draw_level_up_button renders a level up button on screen.*/
void control_draw_level_up_button();

/** control_draw_durability_icons renders durability icons on screen.*/
void control_draw_durability_icons();

/** control_draw_red_hue renders the screen in red hue.*/
void control_draw_red_hue();

/** control_get_spell_type returns the spell type of the given spell ID, and*/
/** report whether is may be cast in town.*/
spell_type __fastcall control_get_spell_type(spell_id spell_id, bool32_t check_town);

/** control_draw_spellbook renders the spellbook on screen.*/
void control_draw_spellbook();

/** control_get_gold_quantity returns the gramatically correct quantity for the*/
/** given amount of gold (i.e. "piece" or "pieces").*/
char *__fastcall control_get_gold_quantity(int gold);

/** control_draw_gold_drop_box renders the gold drop box on screen.*/
void __fastcall control_draw_gold_drop_box(int amount);

/** control_draw_talk_panel renders the talk panel on screen.*/
void control_draw_talk_panel();

/** @} */