// Copyright 2024 twoboy03 (@twoboy03)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

#define ENCODERS_PAD_A { GP0 }
#define ENCODERS_PAD_B { GP1 }
#define ENCODER_RESOLUTION 4

// #define ENCODER_DIRECTION_FLIP

/* SPI & PMW3360 settings. */
#define SPI_DRIVER SPID0
#define SPI_SCK_PIN GP22
#define SPI_MISO_PIN GP20
#define SPI_MOSI_PIN GP23
#define POINTING_DEVICE_CS_PIN GP21

#define POINTING_DEVICE_INVERT_X
#define POINTING_DEVICE_ROTATION_90