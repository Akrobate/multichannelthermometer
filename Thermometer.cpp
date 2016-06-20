#include "Thermometer.h"

// Constructeur
Thermometer::Thermometer() {
  nbrProbes = 0;
  
}



void Thermometer::updateBuffer() {
  
}



byte Thermometer::getValue() {
  return value;
}


int Thermometer::countProbes() {
  return nbrProbes;
}


void Thermometer::setPinConnection(int pins[NBR_INPUT_ANALOG_PINS]) {
     /*
   
   int nbr = (sizeof(myInts)/sizeof(int));
   
   int cnt = 0;
   int i = 0;
   for (i = 0; i < (sizeof(myInts)/sizeof(int)); i++) {
     if (myInts[i] != 0) {
        cnt++; 
     }
     
   }*/
}
