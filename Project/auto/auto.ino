#define sensorPin A0
const int in1 = 7;
const int in2 = 6;
const int ena = 9;

void setup() 

{
  pinMode(sensorPin, INPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(ena, OUTPUT);
  
}
void loop() 
{
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