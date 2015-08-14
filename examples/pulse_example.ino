#include <rgb-controls.h>

using namespace RGBControls;

Led led(9, 10, 11);
Color color(255, 0, 0);

void loop() {
  led.pulse(color, 0, 100 , 5000);
}
