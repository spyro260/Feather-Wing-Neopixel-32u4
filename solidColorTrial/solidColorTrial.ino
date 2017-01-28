int x = 5; //Changes color length
int y = 25; //Changes color speed

#include <Adafruit_NeoPixel.h>
 
#define PIN      6
#define N_LEDS 32 //DEfault for Neopixel is 32, increase to have more space
 
Adafruit_NeoPixel strip = Adafruit_NeoPixel(N_LEDS, PIN, NEO_GRB + NEO_KHZ800);
 
void setup() {
  strip.begin();
}
 
void loop() {
  chase(strip.Color(255, 0, 0)); // Red
  chase(strip.Color(0, 255, 0)); // Green
  chase(strip.Color(0, 0, 255)); // Blue
}
 
static void chase(uint32_t c) {
  for(uint16_t i=0; i<strip.numPixels()+x; i++) {
      strip.setPixelColor(i  , c); // Draw new pixel
      strip.setPixelColor(i-x, 0); // Erase pixel a few steps back
      strip.show();
      delay(y);
  }  }
