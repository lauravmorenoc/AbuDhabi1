#include <LiquidCrystal_I2C.h> // Library for LCD


LiquidCrystal_I2C lcd(0x3D, 20, 4); // I2C address 0x3D (61), 20 column and 4 rows


void setup() {
  // put your setup code here, to run once:
  lcd.init(); // initialize the lcd
  lcd.backlight();

  // Reset
  pinMode(8, OUTPUT);
  digitalWrite(8, HIGH);
}

void loop() {

  int i=0;
  lcd.clear();                 // clear display
  lcd.setCursor(0, 0);         // move cursor to   (0, 0)
  lcd.print("Arduino");        // print message at (0, 0)
  lcd.setCursor(2, 1);         // move cursor to   (2, 1)
  lcd.print("This is a test"); // print message at (2, 1)
  delay(2000);                 // display the above for two seconds

  lcd.clear();                  // clear display
  lcd.setCursor(3, 0);          // move cursor to   (3, 0)
  lcd.print("Printing again");        // print message at (3, 0)
  lcd.setCursor(0, 1);          // move cursor to   (0, 1)
  lcd.print("Good bye"); // print message at (0, 1)
  delay(2000); 

}
