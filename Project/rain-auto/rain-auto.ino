#include "LiquidCrystal_I2C.h"


LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() 
{
  Serial.begin(9600);
  lcd.init();
  lcd.backlight();

  lcd.setCursor(0, 0);
  lcd.print("rain?");
  
  lcd.setCursor(0, 1);
  lcd.print("Hi");

  delay(2000);
}

void loop() 
{
  lcd.setCursor(0, 0);
  lcd.print("rain?");
 int sensorValue = analogRead(A1);
 if(sensorValue>=500)
 {
  lcd.setCursor(0, 1);
  lcd.print("No");
 }
else
{
    lcd.setCursor(0, 1);
    lcd.print("Yes");
}
int sensorValue = analogRead(A0);
}
