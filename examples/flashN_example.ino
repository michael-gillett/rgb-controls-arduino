#include <rgb-controls.h>
using namespace RGBControls;

Led led(9, 10, 11);
Color red(255, 0, 0);
Color green(0, 255, 0);
Color blue(0, 0, 255);

Color yellow(255, 255, 0);
Color magenta(255, 0, 255);
Color cyan(0, 255, 255);

Color colors [6] = {red, green, blue, yellow, magenta, cyan};


void setup() { }

void loop() {
  led.flashN(colors, 6);
}
