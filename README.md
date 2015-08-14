# RGB Controls for Arduino
Arduino library for controlling RGB LEDs


## Quick Start

```c++
#include <rgb-controls.h>
using namespace RGBControls;

Led led(9, 10, 11);
Color red(255, 0, 0);


void setup() { }

void loop() {
  led.pulse(red, 0, 100 , 5000);
}
```

## Classes

### Led

#### `constructor(int red_pin, int green_pin, int blue_pin)`
Initalize an `Led` with 3 Arduino PWM pins.
#### `pulse(Color color, int min, int max, int duration)`
Pulses the brightness of `color` between `min` and `max` every `duration` milliseconds.

Parameter | Description | Example
--- | --- | ---
color | The color to pulse | Color
min | The min brightness percent | `10`
max | The max brightness percent | `70`
duration | The duration in milliseconds to go from `min` to `max` | `5000`

#### `fadeBetween(Color c1, Color c2)`
#### `fadeN(Color* colors, int length)`
#### `flash(Color c, int onTime, int offTime)`
#### `flashN(Color* colors, int length)`
#### `off()`

### Color

#### `constructor(int red, int green, int blue)`
Initialize a `Color` with 3 RGB color values between 0-255
#### `withBrightness(int brightness)`
#### `lerp(Color to, float t)`
