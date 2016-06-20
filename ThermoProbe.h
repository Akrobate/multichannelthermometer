/*
  ThermoProbe.h
  Created by Artiom FEDOROV Mai 2012
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
       
    void updateBuffer();
    byte getValue() ;
    

};

#endif
