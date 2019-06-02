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

// R25 = 100 kOhm, beta25 = 4092 K, 4.7 kOhm pull-up, bed thermistor
const short temptable_1[][2] PROGMEM = {
  { OV(  23), 300 },
  { OV(  25), 295 },
  { OV(  27), 290 },
  { OV(  28), 285 },
  { OV(  31), 280 },
  { OV(  33), 275 },
  { OV(  35), 270 },
  { OV(  38), 265 },
  { OV(  41), 260 },
  { OV(  44), 255 },
  { OV(  ), 250 },
  { OV(  ), 245 },
  { OV(  ), 240 },
  { OV(  ), 235 },
  { OV(49), 230 },
  { OV(  ), 225 },
  { OV(  ), 220 },
  { OV(65), 217 },
  { OV(  ), 210 },
  { OV( ), 205 },
  { OV( ), 200 },
  { OV(91), 198 },
  { OV(107), 192 },
  { OV(131), 185 },
  { OV( ), 180 },
  { OV( ), 175 },
  { OV( ), 170 },
  { OV(153), 164 },
  { OV( ), 160 },
  { OV(185), 156 },
  { OV(221), 150 },
  { OV( ), 145 },
  { OV(288), 140 },
  { OV(316), 135 },
  { OV( ), 130 },
  { OV( ), 125 },
  { OV( ), 120 },
  { OV(438), 115 },
  { OV( ), 110 },
  { OV(516), 105 },
  { OV( ), 100 },
  { OV(590),  97 },
  { OV( ),  90 },
  { OV( ),  85 },
  { OV(661),  83 },
  { OV( ),  75 },
  { OV( ),  70 },
  { OV(801), 66 },
  { OV( ),  60 },
  { OV( ),  55 },
  { OV( ),  50 },
  { OV(902),  43 },
  { OV( ),  40 },
  { OV(938), 36 },
  { OV( ),  30 },
  { OV( ),  25 },
  { OV( ),  20 },
  { OV( ),  15 },
  { OV( ),  10 },
  { OV(),   5 },
  { OV(),   0 },
  { OV(),  -5 },
  { OV(), -10 },
  { OV(), -15 }
};
