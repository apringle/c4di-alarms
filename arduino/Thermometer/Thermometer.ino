#define analogPin  A0 //the thermistor attach to
#define beta 4090 //the beta of the thermistor
#define resistance 10 //the value of the pull-down resistor
 
void setup()
{
  Serial.begin(9600);
}
 
void loop()
{
  //read thermistor value
  long a = analogRead(analogPin);
  //the calculating formula of temperature
  float tempC = beta /(log((1025.0 * 10 / a - 10) / 10) + beta / 298.0) - 273.0;
  Serial.print("Temp:  ");
  Serial.print(tempC);
  Serial.print("  C");
  Serial.println();
  delay(200); //wait for 100 milliseconds
}
