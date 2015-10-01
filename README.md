# A_Sensory_So_Long

This repository contains the source code and circuit diagrams for Project 1 of F15 60-223 Introduction to Physical Computing at CMU.

Notes: 
-Both arduinos have the same firmware, the calibration values are just different. The minVal is the analog value at the position along the tube where you want the song to start. The maxVal is the same but where you want the song to end.
-In the PD sketch, the arduinos must be connected by clicking the open block. Make sure the correct serial port is selected above (a list of serial ports can be obtained by clicking devices). MAKE SURE THAT THE COM PORT IS BELOW 8!! PD is weird. If your computer is giving your arduino a high com port (like windows seems to do) try switching to linux or mac if you can...
-In the PD sketch, the songs can be uploaded by clicking the circles on either side of the sketch. To produce sound, make sure both volume sliders at the bottom are not 0 and that the DAC button on the far left is pressed. Finally, if no sound is comming out, try going to media in the top bar, then audio settings, and make sure the output is set to whatever you are trying to play the sound with.
