#include <SD.h>
#include <LiquidCrystal.h>

#include "OsApplication.h"
#include "OsRender.h"
#include "OsKeyInput.h"
#include "Thermometer.h"


OsApplication::OsApplication() {
   render = new OsRender();
   thermometer = new Thermometer();
  
}


void OsApplication::setLCDDevice(LiquidCrystal * _plcd) {
  render->setLCD(_plcd);
  render->display("Super Fuck");
}


void OsApplication::init() {

  
}

void OsApplication::setProbesPins(int pins[NBR_INPUT_ANALOG_PINS]) {
  thermometer->setPinConnection(pins);
}


void OsApplication::setButtonsPins(int pins[NBR_INPUT_ANALOG_PINS]) {
  
}