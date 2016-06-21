/*
  ThermoProbe.h
  Created by Artiom FEDOROV June 2016
  Released into the public domain.
*/

#ifndef ThermoProbe_h
#define ThermoProbe_h

#define NBR_KEYS 7

#include "Arduino.h"

class ThermoProbe
{
  
  public:
    byte value;
    ThermoProbe();
    float code;
    float celsius;
    float fahrenheit;      
    void updateBuffer();
    void init();
    void setPin(int pin);
    int getValue() ;

  private:
    int probePin;

};

#endif
