const int in1 = 7;
const int in2 = 6;
const int ena = 9;
void setup() 
{
    pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(ena, OUTPUT);
  
}
void loop() 
{
    analogWrite (ena,175);
    digitalWrite (in1,LOW);
    digitalWrite (in2,HIGH);
}