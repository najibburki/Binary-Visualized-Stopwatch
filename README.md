# Binary-Visualized Stopwatch
"Arduino Project for Embedded System Lab Training SS_2019"

### Group Members
Bilal Ahmad Khan, Najib Ullah and Muhammad Abeer Akmal

### Description
A stopwatch is developed which displays the time in binary notation. The clock uses the format mm:ss (minutes:seconds). 6 Green LEDs are used to display seconds and 6 Red LEDs are used to display minutes. When the system starts, the green LEDs are turned on after each second following the binary arrangement(2^0, 2^1, 2^2, 2^3, 2^4, 2^5) respectively. After 60 seconds, the Red LED displaying minutes is turned on and so on. The hardware contains one button for stop/start stopwatch. Upon pressing that button once, the system stops working until the button is pressed again for starting it. The second button on the hardware is for resetting the stopwatch. Whenever it is pressed, the whole system is reset and the counter starts from 0 once again.

### Components Required
1. Arduino Mega
2. Breadboard
3. Red colored LEDs x 6
4. Green colored LEDs x 6
5. 220 ohm resistor x 14
6. Jumper wires x 25

### Breadboard diagram
<img width="90%" src="images\Stopwatch_breadboard.png">

### Schematic Diagram
<img width="90%" src="images\Stopwatch_schematic.png">

### PCB Design
<img width="90%" src="images\Stopwatch_pcb.png">


