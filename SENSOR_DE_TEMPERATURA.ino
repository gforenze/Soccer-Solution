float tempC;
int tempPin=0;
void setup()
{
Serial.begin(9600);
}
void loop()
{
tempC=analogRead(tempPin);
tempC=((5.0*tempC * 100.0)/1024.0); 
Serial.print(tempC);
Serial.print(" grados Celsius\n");
delay(5000);
}
