/*
  OsKeyInput.h
  Created by Artiom FEDOROV June 2016
  Released into the public domain.
*/

#ifndef OsKeyInput_h
#define OsKeyInput_h

#define NBR_KEYS 7

#include "Arduino.h"

class OsKeyInput
{
  
  public:
    byte value;
    OsKeyInput();
       
    void updateBuffer();
    byte getValue() ;
    boolean getBit(byte whatBit);
};

#endif
