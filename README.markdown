## Arduino GPU library (sort of)

Right now this Arduino project includes both a graphics demo and the
HackerspaceDisplay.{cpp,h} files which should eventually be made into a
library.

To hook the host Arduino up to the "GPU" Arduino, connect the following pins
together between the two Arduinos:

- A4 <-> A4
- A5 <-> A5
- 5V <-> 5V
- GND <-> GND
