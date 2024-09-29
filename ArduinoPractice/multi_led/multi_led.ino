int led1 = 3; // PWM pin
int led2 = 5; // PWM pin
int led3 = 6; // PWM pin
int led4 = 9; // PWM pin

void setup() {
  // Set each LED pin as an output
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
}

void loop() {
  // Gradually increase brightness
  for (int brightness = 0; brightness <= 255; brightness += 5) {
    analogWrite(led1, brightness); // Change brightness of LED 1
    analogWrite(led2, brightness); // Change brightness of LED 2
    analogWrite(led3, brightness); // Change brightness of LED 3
    analogWrite(led4, brightness); // Change brightness of LED 4
    delay(30); // Wait for 30ms
  }

  // Gradually decrease brightness
  for (int brightness = 255; brightness >= 0; brightness -= 5) {
    analogWrite(led1, brightness); // Change brightness of LED 1
    analogWrite(led2, brightness); // Change brightness of LED 2
    analogWrite(led3, brightness); // Change brightness of LED 3
    analogWrite(led4, brightness); // Change brightness of LED 4
    delay(30); // Wait for 30ms
  }
}