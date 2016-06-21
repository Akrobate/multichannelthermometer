#include "ThermoProbe.h"

// Constructeur

ThermoProbe::ThermoProbe() {
  probePin = 0;
}

void ThermoProbe::setPin(int pin) {
  probePin = pin;
}

void ThermoProbe::updateBuffer() {
  /*
 code = analogRead(1);
 celsius = 25 + (code - 512) / 11.3;
 fahrenheit = celsius * 1.8 + 32;
  */
}



int ThermoProbe::getValue() {
  return value;
}

void ThermoProbe::init() {
 
}

