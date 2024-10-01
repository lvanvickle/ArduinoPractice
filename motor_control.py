import serial
import time
from motor_func import stop_motors, move_forward

# Set up communication with the Arduino
ser = serial.Serial('/dev/ttyUSB0', 9600)

try:
    while True:
        # Read data from Arduino
        if ser.in_waiting > 0:
            distance = int(ser.readline().decode('utf-8').strip())

            print(f"Distance: {distance} cm")

            # If an object is closer than 20 cm, stop the motors
            if distance < 20:
                print("Object detected! Stopping motors...")
                stop_motors()
            else:
                print("No obstructions detected. Moving forward...")
                move_forward()

    time.sleep(0.1) # Slight delay for readability
except KeyboardInterrupt:
    print("KeyboardInterrupt. Stopping motors...")
    stop_motors()
