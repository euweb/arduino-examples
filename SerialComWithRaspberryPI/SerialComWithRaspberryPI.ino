/*
  Writes incremented counter value every second on serial output pin
*/

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

// connter variable to be incremented and sent
int counter = 0;

void loop() {
  // print out the counter value
  Serial.println(counter);
  delay(1000);
  buttonState++;
}



