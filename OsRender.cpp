#include <LiquidCrystal.h>
#include "OsRender.h"

//LiquidCrystal lcd(12, 13, 14, 15, 16, 17);



// Constructeur
OsRender::OsRender() {

}


// Constructeur
OsRender::OsRender(LiquidCrystal* _plcd) {
  setLCD(_plcd);
}


void OsRender::setLCD(LiquidCrystal* _plcd) {
  lcd = _plcd;  
}


void OsRender::init() {

}


void OsRender::display(String text) {
   //LiquidCrystal lcd(12, 13, 14, 15, 16, 17);
   lcd->clear();
   lcd->setCursor(4, 1);
   lcd->print(text);
}



int OsRender::test() {
  return 1;
}



void OsRender::clearScreen() {
  //GLCD.ClearScreen();
}


void OsRender::Alert(String msg) {
  
  
}


void OsRender::simpleText(int x, int y, String msg) {
  
}



