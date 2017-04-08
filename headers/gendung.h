#pragma once
#include "common_includes.h"
#include "enumerates.h"
#include "structures.h"
/**
 * @file headers/gendung.h
 * @brief headers/gendung.h
 *
 * @ingroup sanctuary_notes
 * @{
 */

/** gendung_init_transparency initializes transparency.*/
/***/
/** PSX ref: 0x8015A070*/
/** PSX def: void DRLG_InitTrans__Fv()*/
void gendung_init_transparency();

/** gendung_copy_transparency copies transparency from the source to the*/
/** destination coordinate.*/
/***/
/** PSX ref: 0x8015A158*/
/** PSX def: void DRLG_CopyTrans__Fiiii(int sx, int sy, int dx, int dy)*/
void __fastcall gendung_copy_transparency(int src_col, int src_row, int dst_col, int dst_row);

/** gendung_init_set_piece initializes the placement variables of the set piece*/
/** (quest dungeon).*/
/***/
/** PSX ref: 0x8015A2A4*/
/** PSX def: void DRLG_InitSetPC__Fv()*/
void gendung_init_set_piece();

/** gendung_mark_set_piece marks the area of the set piece (quest dungeon).*/
/***/
/** PSX ref: 0x8015A2BC*/
/** PSX def: void DRLG_SetPC__Fv()*/
void gendung_mark_set_piece();

/** @} */