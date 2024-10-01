// Define the pins for trigger and echo
int trigPin = 9;
int echoPin = 10;

// Define variables to hold the duration and distance
long duration;
int distance;

// Create a variable to hold the constant to convert speed to sound wave to distance
const double SPEED_OF_SOUND = 0.034;

void setup() {
  // Begin the serial communication
  Serial.begin(9600);

  // Set the trigPin as an output and the echoPin as an input
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop() {
  // Clear the trigPin by setting it to LOW
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  // Set the trigPin HIGH for 10 microseconds to send out the ultrasonic pulse
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Read the time it takes for the echo to be received
  duration = pulseIn(echoPin, HIGH);

  // Calculate the distance (in cm)
  distance = duration * SPEED_OF_SOUND / 2;

  // Send distance to Raspberry Pi
  Serial.println(distance);

  // Add delay for readability
  delay(500);
}
