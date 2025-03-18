/**
 *******************************************************************************
 * Copyright (c) 2021 Nanjing Qinheng Microelectronics Co., Ltd.
 * All rights reserved.
 *
 * This software component is licensed by WCH under BSD 3-Clause license,
 * the "License"; You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                        opensource.org/licenses/BSD-3-Clause
 *
 *******************************************************************************
 */

 #include "pins_arduino.h"




 // Digital PinName array
 const PinName digitalPin[] = {
   PA_0,   // D0/A0
   PA_1,   // D1/A1
   PA_2,   // D2/A2
   PA_3,   // D3/A3
   PA_4,   // D4/A4
   PA_5,   // D5/A5
   PA_6,   // D6/A6
   PA_7,   // D7/A7
   PA_8,   // D8
   PA_9,   // D9
   PA_10,  // D10
   PA_11,  // D11 /A8
   PA_12,  // D12 /A9
   PA_13,  // D13
   PA_14,  // D14
   PA_15,  // D15
   PB_0,   // D16 /A10
   PB_1,   // D17 /A11
   PB_2,   // D18
   PB_3,   // D19
   PB_4,   // D20
   PB_5,   // D21
   PB_6,   // D22
   PB_7,   // D23
   PB_8,   // D24 /A12
   PB_9,   // D25 /A13
   PB_10,  // D26 /A14
   PB_11,  // D27 /A15
   PB_12,  // D28 /A16
   PB_13,  // D29 /A17
   PB_14,  // D30 /A18
   PB_15,  // D31 /A19
   PC_0,   // D32 /A20
   PC_1,   // D33 /A21
   PC_2,   // D34 /A22
   PC_3,   // D35 /A23
   PC_4,   // D36 /A24
   PC_5,   // D37 /A25
   PC_6,   // D38
   PC_7,   // D39
   PC_8,   // D40
   PC_9,   // D41
   PC_10,  // D42
   PC_11,  // D43
   PC_12,  // D44
   PC_13,  // D45
   PC_14,  // D46 /A26
   PC_15,  // D47 /A27
   PD_0,   // D48
   PD_1,   // D49
   PD_2    // D50
 };
 
 // Analog (Ax) pin number array
 const uint32_t analogInputPin[] = {
   0,  // A0,  PA0
   1,  // A1,  PA1
   2,  // A2,  PA2
   3,  // A3,  PA3
   4,  // A4,  PA4
   5,  // A5,  PA5
   6,  // A6,  PA6
   7,  // A7,  PA7
   11, // A8,  PA11
   12, // A9,  PA12
   16, // A10, PB0
   17, // A11, PB1
   24, // A12, PB8
   25, // A13, PB9
   26, // A14, PB10
   27, // A15, PB11
   28, // A16, PB12
   29, // A17, PB13
   30, // A18, PB14
   31, // A19, PB15
   32, // A20, PC0
   33, // A21, PC1
   34, // A22, PC2
   35, // A23, PC3
   36, // A24, PC4
   37, // A25, PC5
   46, // A26, PC14
   47  // A27, PC15
 };
 
 
 
 