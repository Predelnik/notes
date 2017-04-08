#pragma once
#include "common_includes.h"
#include "enumerates.h"
#include "structures.h"
/**
 * @file headers/drlg_l1.h
 * @brief headers/drlg_l1.h
 *
 * @ingroup sanctuary_notes
 * @{
 */

/** drlg_l1_reset_maps resets the dungeon flag, player, NPC, dead, object,*/
/** item, missile and arch maps.*/
/***/
/** PSX ref: 0x8013CEAC*/
/** PSX def: void DRLG_Init_Globals__Fv()*/
void drlg_l1_reset_maps()

/** drlg_l1_load_dun loads tile IDs, monsters and objects from the given*/
/** dungeon file.*/
/***/
/** PSX ref: 0x8013CF64*/
/** PSX sig: void LoadL1Dungeon__FPcii(char *sFileName, int vx, int vy)*/
void __fastcall drlg_l1_load_dun(char *dun_path, int view_col, int view_row);

/** drlg_l1_randomize_stone_floor randomizes floor tiles.*/
/***/
/** PSX ref: 0x8013CAC4*/
/** PSX sig: void DRLG_L1Floor__Fv()*/
void drlg_l1_randomize_stone_floor();

/** drlg_l1_init_piece_id_map initializes the dungeon piece ID map.*/
/***/
/** PSX ref: 0x8013CBA8*/
/** PSX def: void DRLG_L1Pass3__Fv()*/
void drlg_l1_init_piece_id_map();

/** drlg_l1_init_arches initializes arches.*/
/***/
/** PSX ref: 0x8013CF5C*/
/** PSX def: void DRLG_InitL1Vals__Fv()*/
void drlg_l1_init_arches();

/** drlg_l1_preload_dun loads tile IDs from the given dungeon file.*/
/***/
/** PSX ref: 0x8013D138*/
/** PSX sig: void LoadPreL1Dungeon__FPcii(char *sFileName, int vx, int vy)*/
void __fastcall drlg_l1_preload_dun(char *dun_path, int view_col, int view_row);

/** drlg_l1_create_dungeon creates a random cathedral dungeon based on the*/
/** given seed and level entry.*/
/***/
/** PSX ref: 0x80140E64*/
/** PSX sig: void CreateL5Dungeon__FUii(unsigned int rseed, int entry)*/
void __fastcall drlg_l1_create_dungeon(uint32_t seed, int entry);

/** drlg_l1_load_quest_dun loads tile IDs from the dungeon file of the active*/
/** quest level.*/
/***/
/** PSX ref: 0x8013CDA0*/
/** PSX sig: void DRLG_LoadL1SP__Fv()*/
void drlg_l1_load_quest_dun();

/** drlg_l1_free_quest_dun frees the dungeon file of the active quest level.*/
/***/
/** PSX ref: 0x8013CE7C*/
/** PSX sig: void DRLG_FreeL1SP__Fv()*/
void drlg_l1_free_quest_dun();

/** drlg_l1_generate_dungeon generates a cathedral dungeon based on the given*/
/** level entry.*/
/***/
/** PSX ref: 0x80140930*/
/** PSX sig: void DRLG_L5__Fi(int entry)*/
void __fastcall drlg_l1_generate_dungeon(int entry);

/** drlg_l1_place_door places a door at the given coordinate.*/
/***/
/** PSX ref: 0x8013BCB0*/
/** PSX sig: void DRLG_PlaceDoor__Fii(int x, int y)*/
void __fastcall drlg_l1_place_door(int qcol, int qrow);

/** drlg_l1_init_shadows initializes arch and bar shadows.*/
/***/
/** PSX ref: 0x8013C190*/
/** PSX sig: void DRLG_L1Shadows__Fv()*/
void drlg_l1_init_shadows();

/** drlg_l1_place_miniset places the given miniset of tile IDs.*/
/***/
/** PSX ref: 0x8013C5A0*/
/** PSX sig: int DRLG_PlaceMiniSet__FPCUciiiiiii(unsigned char *miniset, int tmin, int tmax, int cx, int cy, int setview, int noquad, int ldir)*/
int __fastcall drlg_l1_place_miniset(uint8_t *miniset, int tmin, int tmax, int cx, int cy, bool32_t set_view, int noquad, int ldir);

/** drlg_l1_reset resets the tile ID and the dungeon flag maps.*/
/***/
/** PSX ref: 0x8013D2F8*/
/** PSX def: void InitL5Dungeon__Fv()*/
void drlg_l1_reset();

/** drlg_l1_clear_flags clears the dungeon generation flags 0x40.*/
/***/
/** PSX ref: 0x8013D37C*/
/** PSX def: void L5ClearFlags__Fv()*/
void drlg_l1_clear_flags();

/** drlg_l1_generate_first_room generates the first room of the dungeon.*/
/***/
/** PSX ref: 0x8013D7FC*/
/** PSX def: void L5firstRoom__Fv()*/
void drlg_l1_generate_first_room();

/** drlg_l1_add_room adds walls for a room at the given area.*/
/***/
/** PSX ref: 0x8013D3CC*/
/** PSX sig: void L5drawRoom__Fiiii(int x, int y, int w, int h)*/
void __fastcall drlg_l1_add_room(int qcol_start, int qrow_start, int qcol_count, int qrow_count);

/** drlg_l1_generate_room generates a room of the given dimensions at the*/
/** spcified coordinates.*/
/***/
/** PSX ref: 0x8013D4CC*/
/** PSX sig: void L5roomGen__Fiiiii(int x, int y, int w, int h, int dir)*/
void __fastcall drlg_l1_generate_room(int qcol_start, int qrow_start, int qcol_count, int qrow_count, int dir);

/** drlg_l1_is_area_empty reports whether the given area is empty.*/
/***/
/** PSX ref: 0x8013D438*/
/** PSX sig: unsigned char L5checkRoom__Fiiii(int x, int y, int width, int height)*/
bool32_t __fastcall drlg_l1_is_area_empty(int qcol_start, int qrow_start, int qcol_count, int qrow_count);

/** drlg_l1_get_area returns the number of walls on the map.*/
/***/
/** PSX ref: 0x8013DB9C*/
/** PSX sig: long L5GetArea__Fv()*/
int drlg_l1_get_area();

/** drlg_l1_init_dmap initializes a dungeon tile ID map of twice the size of*/
/** the dungeon, repeating each tile in blocks of 4.*/
/***/
/** PSX ref: 0x8013DBFC*/
/** PSX def: void L5makeDungeon__Fv()*/
/***/
/** NOTE: The dmap (double map) seems to be unused.*/
void drlg_l1_init_dmap();

/** drlg_l1_generate_pattern replaces tile ID patterns based on a lookup table.*/
/***/
/** PSX ref: 0x8013DC88*/
/** PSX def: void L5makeDmt__Fv()*/
void drlg_l1_generate_pattern();

/** drlg_l1_add_wall adds wall, arch or bar tile IDs.*/
/***/
/** PSX ref: 0x8013E458*/
/** PSX def: void L5AddWall__Fv()*/
void drlg_l1_add_wall();

/** drlg_l1_get_horiz_wall_space returns the number of horizontal wall tiles*/
/** that fit at the given coordinate.*/
/***/
/** PSX ref: 0x8013DD70*/
/** PSX sig: int L5HWallOk__Fii(int i, int j)*/
int __fastcall drlg_l1_get_horiz_wall_space(int qcol, int qrow);

/** drlg_l1_get_vert_wall_space returns the number of vertical wall tiles that*/
/** fit at the given coordinate.*/
/***/
/** PSX ref: 0x8013DEAC*/
/** PSX sig: int L5VWallOk__Fii(int i, int j)*/
int __fastcall drlg_l1_get_vert_wall_space(int qcol, int qrow);

/** drlg_l1_add_horiz_wall adds a horizontal wall based on the given tile ID.*/
/***/
/** PSX ref: 0x8013DFF4*/
/** PSX sig: void L5HorizWall__Fiici(int i, int j, char p, int dx)*/
void __fastcall drlg_l1_add_horiz_wall(int qcol, int qrow, l1_tile_id tile_id, int qcol_count);

/** drlg_l1_add_vert_wall adds a vertical wall based on the given tile ID.*/
/***/
/** PSX ref: 0x8013E22C*/
/** PSX sig: void L5VertWall__Fiici(int i, int j, char p, int dy)*/
void __fastcall drlg_l1_add_vert_wall(int qcol, int qrow, l1_tile_id tile_id, int qrow_count);

/** drlg_l1_fix_tiles fixes tile IDs of wall edges.*/
/***/
/** PSX ref: 0x8013EA28*/
/** PSX def: void L5tileFix__Fv()*/
void drlg_l1_fix_tiles();

/** drlg_l1_decorate decorates the dungeon with tapestry tile IDs.*/
/***/
/** PSX ref: 0x8013F2EC*/
/** PSX def: void DRLG_L5Subs__Fv()*/
void drlg_l1_decorate();

/** drlg_l1_generate_chamber generates chambers.*/
/***/
/** PSX ref: 0x8013F5F8*/
/** PSX def: void L5FillChambers__Fv()*/
void drlg_l1_generate_chambers();

/** drlg_l1_generate_chamber generates a chamber at the given coordiates with*/
/** columns on the specified sides.*/
/***/
/** PSX ref: 0x8013E6B4*/
/** PSX sig: void DRLG_L5GChamber__Fiiiiii(int sx, int sy, int topflag, int bottomflag, int leftflag, int rightflag)*/
void __fastcall drlg_l1_generate_chamber(int qcol_start, int qrow_start, bool32_t top_right, bool32_t bottom_left, bool32_t top_left, bool32_t bottom_right);

/** drlg_l1_generate_hall generates a hall of columns and arches.*/
/***/
/** PSX ref: 0x8013E974*/
/** PSX sig: void DRLG_L5GHall__Fiiii(int x1, int y1, int x2, int y2)*/
void __fastcall drlg_l1_generate_hall(int qcol_start, int qrow_start, int qcol_end, int qrow_end);

/** drlg_l1_init_quest_dun initializes tile IDs based on the loaded quest*/
/** dungeon file.*/
/***/
/** PSX ref: 0x8013F4F8*/
/** PSX sig: void DRLG_L5SetRoom__Fii(int rx1, int ry1)*/
void __fastcall drlg_l1_init_quest_dun(int qcol_start, int qrow_start);

/** drlg_l1_floor_transparency adds transparency to concealing walls.*/
/***/
/** PSX ref: 0x8014016C*/
/** PSX def: void DRLG_L5FloodTVal__Fv()*/
void drlg_l1_floor_transparency();

/** drlg_l1_floor_transparency_recursive recursively adds transparency to*/
/** concealing walls.*/
/***/
/** PSX ref: 0x8013FCE4*/
/** PSX sig: void DRLG_L5FTVR__Fiiiii(int i, int j, int x, int y, int d)*/
void __fastcall drlg_l1_floor_transparency_recursive(int qcol, int qrow, int col, int row, int direction);

/** drlg_l1_fix_transparency fixes transparency close to dirt tile IDs after*/
/** dungeon generation.*/
/***/
/** PSX ref: 0x80140264*/
/** PSX def: void DRLG_L5TransFix__Fv()*/
void drlg_l1_fix_transparency();

/** drlg_l1_fix_dirt fixes dirt tile IDs after dungeon generation.*/
/***/
/** PSX ref: 0x801406A8*/
/** PSX sig: void DRLG_L5DirtFix__Fv()*/
void drlg_l1_fix_dirt();

/** drlg_l1_fix_corners fixes corner and arch tile IDs after dungeon generation.*/
/***/
/** PSX ref: 0x80140824*/
/** PSX def: void DRLG_L5CornerFix__Fv()*/
void drlg_l1_fix_corners();

/** @} */