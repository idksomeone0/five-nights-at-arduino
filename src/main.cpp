#include <Arduino.h>
#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 6, 11, 10, 9, 8, 7);

void intro() {
  delay(1000);
  lcd.setCursor(0, 0);
  lcd.write("Made by a");
  delay(1000);
  
  lcd.setCursor(0, 1);
  lcd.write("15 year old");
  delay(600);
  
  lcd.clear();
  delay(1300);
  
  lcd.setCursor(0, 0);
  lcd.write("Original by ");
  delay(1000);
  
  lcd.setCursor(0, 1);
  lcd.write("Scott Cawthon");
  delay(600);
  
  lcd.clear();
  delay(1000);

  lcd.setCursor(0, 0);
  lcd.write("Five Nights At");
  delay(1000);

  lcd.setCursor(0, 1);
  lcd.write("Freddy's");

}


void setup() {
  Serial.begin(9000);
  lcd.begin(16,2);
  intro();
}

void loop() {

}

