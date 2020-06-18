#define sensorPin A0
#define sensorPin A1
#include "LiquidCrystal_I2C.h"
LiquidCrystal_I2C lcd(0x27, 16, 2);

const int in1 = 7;
const int in2 = 6;
const int ena = 9;


void setup() 

{
  lcd.init();
  lcd.backlight();
  Serial.begin(9600);
  pinMode(sensorPin, INPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(ena, OUTPUT);
  lcd.setCursor(0, 0);
  lcd.print("Hi");
  delay(2000);
  lcd.clear();
  
}
void loop() 
{
    int soil = analogRead(A0);//soil
    int rain = analogRead(A1);//snow-rain

    if (soil >=500)//มากกว่าคือแห้ง
    {
    analogWrite (ena,175);
    digitalWrite (in1,LOW);
    digitalWrite (in2,HIGH);
    lcd.setCursor(0, 0);
    lcd.print("water?");
    lcd.setCursor(0, 1);
    lcd.print("Yes");
    delay(2000);
    lcd.clear();   
    } 
    else
    {
    analogWrite (ena,0);
    digitalWrite (in1,LOW);
    digitalWrite (in2,HIGH);
    lcd.setCursor(0, 0);
    lcd.print("water?");
    lcd.setCursor(0, 1);
    lcd.print("No");
    delay(2000);
    lcd.clear();
    }
    lcd.setCursor(0, 0);
    lcd.print("rain?");
    if(rain>=500)//มากกว่าคือแห้ง
    {
        
        lcd.setCursor(0, 1);
        lcd.print("No");
        delay(2000);
        lcd.clear();
        }
        else
        {
        lcd.setCursor(0, 1);
        lcd.print("Yes");
        delay(2000);
        lcd.clear();   
    }
}