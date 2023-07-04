

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  int   sensorValue = analogRead(A0);

  // Calculate the actual voltage at sensor out
  float voltage     = sensorValue * (5.0 / 1023.0);

  //Print the value of the analog input
  Serial.print(sensorValue);
  Serial.print(",");

  //Print the UV index value. As per the specifications for the sensor,
  //this is done by dividing the sensor output voltage by 0.1
  Serial.println(voltage/0.1);
  delay(100);        // delay in between reads for stability
}
