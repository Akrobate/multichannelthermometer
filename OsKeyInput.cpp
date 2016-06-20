#include "OsKeyInput.h"

// Constructeur
OsKeyInput::OsKeyInput() {

  
}


void OsKeyInput::updateBuffer() {
  
}


byte OsKeyInput::getValue() {
  return value;
}


boolean OsKeyInput::getBit(byte whatBit) {
  boolean bitState;
  bitState = value & (1 << whatBit);
  return bitState;
}


  /*
  if (digitalRead(bouton1) == HIGH) {
     display("Erasing..."); 
     pic.eraseChip();   
     delay(1000);
     display("Chip erased"); 
  }
  
  if (digitalRead(bouton2) == HIGH) {
     display("Programing..."); 
      pic.loadProgram(programm);
      pic.loadConfiguration(confWord);
     delay(1000);
     display("Chip Programed");
  }
  */
  
  
  
    //lcd.begin(16, 2);
 //display("MulticanalThermometer");

 // pinMode(bouton1, INPUT);
 // pinMode(bouton2, INPUT);  
 
 
 /*
 int bouton1 = 15;
int bouton2 = 16;
*/
