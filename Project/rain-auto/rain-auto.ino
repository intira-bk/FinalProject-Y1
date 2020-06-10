#include "LiquidCrystal_I2C.h"
#define sensorPin A0
#define sensorPin A1
const int in1 = 7;
const int in2 = 6;
const int ena = 9;

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

  pinMode(sensorPin, INPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(ena, OUTPUT);
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
    if (sensorValue >=500)
    {
    analogWrite (ena,175);
    digitalWrite (in1,LOW);
    digitalWrite (in2,HIGH);
    } 
    else
    {
    analogWrite (ena,0);
    digitalWrite (in1,LOW);
    digitalWrite (in2,HIGH);
    }
}
