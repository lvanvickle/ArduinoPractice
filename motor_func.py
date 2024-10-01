import time
from adafruit_motorkit import MotorKit

# Create an instance of the MotorKit class
kit = MotorKit()

def move_forward():
    kit.motor1.throttle = 1.0 # Full speed forward
    kit.motor2.throttle = 1.0
    kit.motor3.throttle = 1.0
    kit.motor4.throttle = 1.0

def stop_motors():
    kit.motor1.throttle = 0 # Stop motor
    kit.motor2.throttle = 0
    kit.motor3.throttle = 0
    kit.motor4.throttle = 0
