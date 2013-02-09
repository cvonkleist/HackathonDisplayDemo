
// Written by Nick Gammon
// February 2012

#include <Wire.h>
#include <Adafruit_GFX.h>   // Core graphics library
#include "HackathonDisplay.h"

const byte LED = 13;
HackathonDisplay *display;


#define BETA_ARDUINO ARDUINO < 100

void setup () 
{
  pinMode (LED, OUTPUT);  
  display = new HackathonDisplay();
  display->begin();
}

void loop () 
{
  /* circles */
  for(int i = 0; i < 10; i++) {
    int x = random(0, 31);
    int y = random(0, 15);
    int c = display->Color333(random(0,255),random(0,255),random(0,255));
    display->drawCircle(x, y, i, c);
  }

  /* sine wave */
  //static int offset = 0;
  //for(int x = 0; x < 32; x++) {
    //int y = sin(x / 10.0 + offset) * 8 + 8;
    //display->drawPixel(x, y, display->Color333(255,255,255));
  //}
  //display->clearDisplay();
  //offset++;
}
