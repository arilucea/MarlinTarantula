/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * MKS Robin (STM32F130ZET6) board pin assignments
 */

#ifndef __STM32F1__
  #error "Oops! Select an STM32F1 board in 'Tools > Board.'"
#endif

#if HOTENDS > 2 || E_STEPPERS > 2
  #error "MKS Robin supports up to 2 hotends / E-steppers. Comment out this line to continue."
#endif

#define BOARD_NAME "MKS Robin / STM32F103ZET6"

//
// Release PB4 (Y_ENABLE_PIN) from JTAG NRST role
//
#define DISABLE_DEBUG

//
// Limit Switches
//
#define X_MIN_PIN          PB12
#define X_MAX_PIN          PB0
#define Y_MIN_PIN          PC5
#define Y_MAX_PIN          PC4
#define Z_MIN_PIN          PA4
#define Z_MAX_PIN          PF7

//
// Steppers
//
#define X_ENABLE_PIN       PB9
#define X_STEP_PIN         PB8
#define X_DIR_PIN          PB5

#define Y_ENABLE_PIN       PB4
#define Y_STEP_PIN         PG15
#define Y_DIR_PIN          PG10

#define Z_ENABLE_PIN       PD7
#define Z_STEP_PIN         PD3
#define Z_DIR_PIN          PG14

#define E0_ENABLE_PIN      PG13
#define E0_STEP_PIN        PG8
#define E0_DIR_PIN         PA15

#define E1_ENABLE_PIN      PA12
#define E1_STEP_PIN        PA11
#define E1_DIR_PIN         PA8

//
// Temperature Sensors
//
#define TEMP_0_PIN         PC1   // TH1
#define TEMP_1_PIN         PC2   // TH2
#define TEMP_BED_PIN       PC0   // TB1

//
// Heaters / Fans
//
#define HEATER_0_PIN       PC7   // HEATER1
#define HEATER_1_PIN       PA6   // HEATER2
#define HEATER_BED_PIN     PC6   // HOT BED

#define FAN_PIN            PA7   // FAN

#define SERVO0_PIN         PC3  // XS1 - 5
#define SERVO1_PIN         PA1  // XS1 - 6
#define SERVO2_PIN         PF9  // XS2 - 5
#define SERVO3_PIN         PF8  // XS2 - 6

/**
 * Note: MKS Robin board is using SPI2 interface, make sure your stm32duino library is configured accordingly
 */
//#define MAX6675_SS_PIN     PE5  // TC1 - CS1
//#define MAX6675_SS_PIN     PE6  // TC2 - CS2

#define POWER_LOSS_PIN     PA2   // PW_DET
#define PS_ON_PIN          PA3   // PW_OFF
#define FIL_RUNOUT_PIN     PF11  // MT_DET

#define BEEPER_PIN         PC13
#define LED_PIN            PB2

#define SDSS               -1
