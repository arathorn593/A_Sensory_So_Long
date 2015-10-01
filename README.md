# A_Sensory_So_Long

This repository contains the source code for Project 1 of F15 60-223 Introduction to Physical Computing at CMU.

Notes: 
-Because of technical issues with the arduinos, we used two arduinos, one for each sensor (connected to pin 0). You could use just one instead and use two analog pins.
-The wiring for the tube is as follows: the arduino analog pin is connected to one side of a 680 ohm resistor and to one end of the tube. The other side of the 680 ohm resistor is connected to 5V. Additionally, there is a wire that is connected to ground. When this wire touches the tube, a circuit is completed, and the resitstance varies according to the possition of the grounding wire along the tube.
-Both arduinos have the same firmware, the calibration values are just different. The minVal is the analog value at the position along the tube where you want the song to start. The maxVal is the same but where you want the song to end.
-In the PD sketch, the arduinos must be connected by clicking the open block. Make sure the correct serial port is selected above (a list of serial ports can be obtained by clicking devices). MAKE SURE THAT THE COM PORT IS BELOW 8!! PD is weird. If your computer is giving your arduino a high com port (like windows seems to do) try switching to linux or mac if you can...
-In the PD sketch, the songs can be uploaded by clicking the circles on either side of the sketch. To produce sound, make sure both volume sliders at the bottom are not 0 and that the DAC button on the far left is pressed. Finally, if no sound is comming out, try going to media in the top bar, then audio settings, and make sure the output is set to whatever you are trying to play the sound with.
