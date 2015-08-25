#include <rgb-controls.h>
using namespace RGBControls;

Led led(9, 10, 11);
Color red(255, 0, 0);


void setup() { }

void loop() {
  // Pulse red from 0% brightness to 100% brightness every 5 seconds
  led.pulse(red, 0, 100, 5000);
}
