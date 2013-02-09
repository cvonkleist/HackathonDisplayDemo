## Arduino GPU library (sort of)

Right now this Arduino project includes both a graphics demo and the
HackerspaceDisplay.{cpp,h} files which should eventually be made into a
library.

## How to use this repository

This software runs the host Arduino. Download it to the directory containing
your sketches and flash it to your host Arduino, like this:

    cd ~/Documents/Arduino
    git clone https://github.com/cvonkleist/HackathonDisplayDemo.git

You also need to get the Arduino GPU sketch and flash that to your GPU Arduino.

## Wiring

To hook the host Arduino up to the "GPU" Arduino, connect the following pins
together between the two Arduinos:

- A4 <-> A4
- A5 <-> A5
- 5V <-> 5V
- GND <-> GND

There are a couple of photos in the repository.
