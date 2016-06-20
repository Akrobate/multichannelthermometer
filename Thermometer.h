/*
  Thermometer.h
  Created by Artiom FEDOROV June 2016
  Released into the public domain.
  This class represents a stack of thermoProbes. Each thermoprobe
  is a thermistance with its own value, parameter and calculation
*/

#ifndef Thermometer_h
#define Thermometer_h

#ifndef NBR_INPUT_ANALOG_PINS
#define NBR_INPUT_ANALOG_PINS 8
#endif

#include "Arduino.h"
#include "ThermoProbe.h"


class Thermometer
{
  private:
    int nbrProbes;
  
  
  public:
    byte value;
    Thermometer();
      
   ThermoProbe *thermosprobes[NBR_INPUT_ANALOG_PINS];
       
    int countProbes();
    void updateBuffer();
    byte getValue() ;
    void setPinConnection(int pins[NBR_INPUT_ANALOG_PINS]);
};

#endif
