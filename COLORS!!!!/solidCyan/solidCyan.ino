int x = 100; //Changes color length
int y = 25; //Changes color speed

#include <Adafruit_NeoPixel.h>
 
#define PIN      6
#define N_LEDS 32 //DEfault for Neopixel is 32, increase to have more space
 
Adafruit_NeoPixel strip = Adafruit_NeoPixel(N_LEDS, PIN, NEO_GRB + NEO_KHZ800);
 
void setup() {
  strip.begin();
}

void loop() {
    chase(strip.Color(29, 242, 238)); //Cyan
}
 
void chase(uint32_t c) {
  for(uint16_t i=0; i<strip.numPixels()+x; i++) {
      strip.setPixelColor(i  , c); // Draw new pixel
      strip.show();
  }  }
