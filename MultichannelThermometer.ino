#define NBR_INPUT_ANALOG_PINS 8

#include <LiquidCrystal.h>
#include "OsRender.h"
#include "OsApplication.h"
#include "Thermometer.h"

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 13, 14, 15, 16, 17);
int thermoprobespins[NBR_INPUT_ANALOG_PINS] = {38, 39, 40, 41};

OsApplication app;

void setup() {

   app.setLCDDevice(&lcd); 
   app.setProbesPins(thermoprobespins);
   app.render->display("Init complete");
}


void loop() {
   delay(1000);
}

