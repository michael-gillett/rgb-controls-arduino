#include <rgb-controls.h>
using namespace RGBControls;

Led led(9, 10, 11);
Color red(255, 0, 0);
Color green(0, 255, 0);
Color blue(0, 0, 255);

Color colors[3] = { red, green, blue };


void setup() { }

void loop() {
  led.fadeN(colors, 3);
}
