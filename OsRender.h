/*
  OsRender.h - Library for command Lego RC PowerFunctions
  Created by Artiom FEDOROV Mai 2012
  Released into the public domain.
*/

#ifndef OsRender_h
#define OsRender_h

#include "Arduino.h"
#include <LiquidCrystal.h>

class OsRender
{
  public:
    LiquidCrystal* lcd;
    
    OsRender();
    OsRender(LiquidCrystal* _plcd);
    int test();
    void init();
    void setLCD(LiquidCrystal* _plcd);
    void display(String text);
    
    void clearScreen();  
    void Alert(String msg) ;
    void simpleText(int x, int y, String msg);
    
    
  private:
  
  
};

#endif
