#include "Thermometer.h"
#include "ThermoProbe.h"
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

    //ThermoProbe
  
  
   int nbr = (sizeof(pins)/sizeof(int));
   
   int cnt = 0;
   int i = 0;
   for (i = 0; i < (sizeof(pins)/sizeof(int)); i++) {
     if (pins[i] != 0) {
         thermosprobes[cnt] = ThermoProbe();
         thermosprobes[cnt].setPin(pins[i]);
         
          cnt++;
     }
   }
}
