#pragma once
#include "common_includes.h"
#include "enumerates.h"
#include "structures.h"
/**
 * @file headers/capture.h
 * @brief headers/capture.h
 *
 * @ingroup sanctuary_notes
 * @{
 */

/** capture_screenshot captures a screenshot and stores it within the game*/
/** directory as "screenXX.pcx". While the screenshot is being taken, the game is*/
/** paused temporarily as indicated by the red screen.*/
void capture_screenshot();

/** @} */