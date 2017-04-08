#pragma once
#include "common_includes.h"
#include "enumerates.h"
#include "structures.h"
/**
 * @file headers/dx.h
 * @brief headers/dx.h
 *
 * @ingroup sanctuary_notes
 * @{
 */

/** dx_init initializes the DirectX rendering system.*/
void __fastcall dx_init(HWND hWnd);

/** dx_create_primary_surface creates the primary DirectDraw surface.*/
void dx_create_primary_surface();

/** dx_cleanup terminates the DirectX rendering system.*/
void dx_cleanup();

/** @} */