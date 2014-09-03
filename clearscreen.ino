#include <TVout.h>

TVout TV;

void setup() {
  TV.begin(PAL,120,96);
  
  TV.clear_screen();
  
  TV.invert();
}

void loop() {
}
