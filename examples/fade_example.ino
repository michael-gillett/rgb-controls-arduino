#include <rgb-controls.h>
using namespace RGBControls;

Led led(9, 10, 11);
Color red(255, 0, 0);
Color blue(0, 0, 255);


void setup() { }

void loop() {
  // Fade the light between red and blue every second
  led.fade(red, blue, 1000);
}
