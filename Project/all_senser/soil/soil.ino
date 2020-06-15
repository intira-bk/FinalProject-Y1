#define sensorPin A0
void setup() 
{
    Serial.begin(9600);
    pinMode(sensorPin, INPUT);
}
void loop() 
{
     int sensorValue = analogRead(A0);
}