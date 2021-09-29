#include <LiquidCrystal_I2C.h>  // Library for LCD

LiquidCrystal_I2C lcd(0x27,16,2); //I2C address 0x27, 16 columns and 2 rows

void setup() {
  // put your setup code here, to run once:
  lcd.init();  //initialize the lcd
  lcd.backlight();  //open the backlight 

  lcd.setCursor(0,0);     //(column_index, row_index);
  lcd.print("Hello World!");
  lcd.setCursor(0,1);
  lcd.print("Hello Arduino!"); 
}

void loop() {
  // put your main code here, to run repeatedly:

}
