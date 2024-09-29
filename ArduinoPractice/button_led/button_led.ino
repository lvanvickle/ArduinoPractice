int led = 4; // Define the LED pin
int button = 7; // Define the button pin
int buttonState = 0; // Variable to store the button state

void setup() {
    pinMode(led, OUTPUT); // Set the LED pin as an output
    pinMode(button, INPUT); // Set the button pin as an input
}

void loop() {
    // Read the state of the button (HIGH when pressed, LOW when not pressed)
    buttonState = digitalRead(button);
    
    // Check if the button is pressed
    if (buttonState == HIGH) {
        digitalWrite(led, HIGH); // If the button is pressed, turn the LED on
    } else {
        digitalWrite(led, LOW); // If the button is not pressed, turn the LED off
    }
}