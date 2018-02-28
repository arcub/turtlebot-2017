#include <Adafruit_NeoPixel.h>

#define PIN 7
#define NUMPIXELS 8

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);
int delayval = 2000;

void setup() {
Serial.begin(9600);
pixels.begin();
pixels.setBrightness(10);
pixels.show();
}

void loop() {
  // turn all to red
for(int i=0;i<NUMPIXELS;i++){
    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(i, pixels.Color(150, 0,0)); // Moderately bright green color.
  }
pixels.show();
delay(delayval);
// turn all to green
for(int i=0; i<NUMPIXELS;i++){
  pixels.setPixelColor(i, pixels.Color(0, 150, 0));
}

pixels.show();
delay(delayval);
}
