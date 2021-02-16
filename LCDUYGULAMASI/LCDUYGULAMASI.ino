#include <LiquidCrystal.h>

LiquidCrystal LCD(12,11,5,4,3,2);



void setup() {
  LCD.begin(16,2);
  LCD.clear();
  LCD.print("MERHABA");
  LCD.setCursor(0,2);
  LCD.print("BEN ELIF");
  }

void loop() {
  

}
