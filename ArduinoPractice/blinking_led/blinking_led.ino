int led = 4; // Define the LED pin

void setup() {
    pinMode(led, OUTPUT); // Set the LED pin as an output
}

void loop() {
    digitalWrite(led, HIGH); // Turn the LED on
    delay(1000); // Wait for 1 second
    digitalWrite(led, LOW); // Turn the LED off
    delay(1000); // Wait for 1 second
}