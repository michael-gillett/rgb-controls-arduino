#include <rgb-controls.h>
using namespace RGBControls;

Led led(9, 10, 11);
Color red(255, 0, 0);


void setup() { }

void loop() {
  // Pulse red from 10% brightness to 100% brightness every 5 seconds
  led.fade(red.withBrightness(10), red, 5000);
}
