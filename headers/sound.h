#pragma once
#include "common_includes.h"
#include "enumerates.h"
#include "structures.h"
/**
 * @file headers/sound.h
 * @brief headers/sound.h
 *
 * @ingroup sanctuary_notes
 * @{
 */

/** sound_stop stops the sounds from playing on all audio channels.*/
void __fastcall sound_stop(bool32_t force_stop);

/** sound_cleanup_file terminates and releases the given sound file.*/
void __fastcall sound_cleanup_file(SoundFile *sound_file);

/** sound_cleanup terminates the sound system.*/
void sound_cleanup();

/** sound_stop_music stops the background music playback.*/
void sound_stop_music();

/** @} */