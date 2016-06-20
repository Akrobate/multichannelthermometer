/*
  Created by Artiom FEDOROV June 2016
  Released into the public domain.
*/

#ifndef OsApplication_h
#define OsApplication_h

#ifndef NBR_INPUT_ANALOG_PINS
#define NBR_INPUT_ANALOG_PINS 8
#endif

#include <LiquidCrystal.h>

#include "Arduino.h"
#include "OsRender.h"
#include "OsKeyInput.h"
#include "Thermometer.h"

class OsApplication
{

  public:
  
    OsKeyInput * keys;
    OsRender * render;
    Thermometer * thermometer;
  
  
    OsApplication();  
    void setLCDDevice(LiquidCrystal * _plcd);
    void setProbesPins(int pins[NBR_INPUT_ANALOG_PINS]);
    void setButtonsPins(int pins[NBR_INPUT_ANALOG_PINS]);
    void init();    
    
};

#endif
