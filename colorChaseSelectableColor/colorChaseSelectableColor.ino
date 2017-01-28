 #include <Adafruit_NeoPixel.h>
 
#define PIN      6
#define N_LEDS 32

//Change int x to change chase length
int x = 32;

Adafruit_NeoPixel strip = Adafruit_NeoPixel(N_LEDS, PIN, NEO_GRB + NEO_KHZ800);
 
void setup() {
  strip.begin();
}
 
void loop() {
  chase(strip.Color(0, 255, 0)); //Green
}
 
static void chase(uint32_t c) {
  for(uint16_t i=0; i<strip.numPixels()+x; i++) {
      strip.setPixelColor(i  , c); // Draw new pixel
      strip.setPixelColor(i-x, 0); // Erase pixel a few steps back
      strip.show();
      delay(45);
  }}


