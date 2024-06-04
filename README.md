# Line Follower Using QTR Sensor

## Overview:

This project demonstrates a line follower robot using QTR sensors and Arduino. The robot is designed to follow a black line on a white surface autonomously. The QTR sensors are used to detect the line, and the Arduino interprets the sensor readings to control the motors accordingly.

## Components:
<img src="https://github.com/sohailaesmat14/Line-Follower-using-QTR-sensor-/assets/170406386/dcf51759-6784-4252-8d81-fc8e6392ce31" alt="Profile Image" align="right" width="300" style="margin-left: 20px;">
1. Arduino Uno
2. QTR sensor array
3. Motor driver (L298N)
4. DC motors (2)
5. Chassis
6. Wheels
7. Power source (battery pack)
8. Jumper wires

## Setup:

1. **Hardware:**
   - Mount the QTR sensor array on the front of the robot chassis.
   - Connect the QTR sensor pins to the Arduino according to the datasheet.
   - Connect the motor driver to the Arduino and motors, ensuring correct polarity.
   - Assemble the chassis, attach wheels, and place the motors securely.

2. **Software:**
   - Download and install the Arduino IDE from [Arduino's official website](https://www.arduino.cc/en/software).
   - Open the Arduino IDE and create a new sketch.
   - Copy and paste the provided code into the sketch.
   - Save the sketch with an appropriate name.
[![Line Follower Robot Demo]](https://github.com/sohailaesmat14/Line-Follower-using-QTR-sensor-/assets/170406386/af4ac1da-f995-4acd-8eaa-6ba3550d823c)




## Usage:

1. Upload the code to the Arduino board.
2. Place the robot on a track with a black line on a white surface.
3. Ensure the QTR sensor array is positioned over the line.
4. Power on the robot.
5. The robot should start following the line autonomously.

## Notes:

- Fine-tune the PID parameters and sensor thresholds for optimal performance.
- Ensure the line is wide enough and sufficiently contrasted for reliable detection.
- Test the robot on different track layouts and lighting conditions for robustness.
