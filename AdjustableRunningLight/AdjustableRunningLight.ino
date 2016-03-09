/*
  Running lights adjustable by a potentiometer
*/
const int analogInPin = A0;  // Analog input pin that the potentiometer is attached to

void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(10, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {

  digitalWrite(4, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(getDelay());              // wait for a second

  digitalWrite(4, HIGH);
  digitalWrite(13, LOW);
  delay(getDelay());

  digitalWrite(5, LOW);
  digitalWrite(12, HIGH);
  delay(getDelay());

  digitalWrite(5, HIGH);
  digitalWrite(12, LOW);
  delay(getDelay());

  digitalWrite(6, LOW);
  digitalWrite(11, HIGH);
  delay(getDelay());

  digitalWrite(6, HIGH);
  digitalWrite(11, LOW);
  delay(getDelay());

  digitalWrite(3, LOW);
  digitalWrite(10, HIGH);
  delay(getDelay());

  digitalWrite(3, HIGH);
  digitalWrite(10, LOW);
  delay(getDelay());

}

int getDelay() {
  
  // read the analog in value:
  int sensorValue = analogRead(analogInPin);
  
  // map it to the range of the delay value
  int outputValue = map(sensorValue, 0, 1023, 0, 255);

  return outputValue;
}
