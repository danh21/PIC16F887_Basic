# Descripption
    - All basic projects are related to PIC16F887 microcontroller.
    - Source code is compiled by CCS C Compiler.
    - Simulation of projects is executed by Proteus.

# Source
    - Led: 
        + Version 1: simulates effect of 8 leds by period (blink, run,...).
        + Version 2: uses 74HC595 ICs to control more 8 leds.
        + Version 3: uses interrupt timer to blink led by period.

    - Button: 
        + Version 1: uses buttons (on, off, toggle) to control led.
        + Version 2: uses buttons to simulate PIV sensors. When sensors detect, buzzers and leds are activated.

    - Counter:
        + Version 1: uses 74LS47 IC to decode to display number on 1 led 7-segment, then counts up and counts down.
        + Version 2: counts up and displays number on 1 led 7-segment 2-digit.
        + Version 3: counts down (using 74HC595 IC for output data) and displays number on 1 led 7-segment 2-digit.
        + Version 4: uses buttons to count up/down (using 74HC595 IC for output data) and displays number on 1 led 7-segment 2-digit.

    - Servo: 
        + Version 1: rotates motor servo by controlling pulse.
        + Version 2: uses button to rotate motor servo by timing.

    - Keypad: uses keypad to enter characters, then displays letters on virtual terminal by UART.

    - LCD: displays information on 16x2 LCD.

    - ADC: reads ADC and displays value on LCD.

    - RTC: displays real time clock on LCD.