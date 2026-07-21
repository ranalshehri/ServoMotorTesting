# Servo Motor Control with Arduino

## Overview

This project demonstrates basic control of four servo motors using an Arduino and the Servo library. Two programs were implemented:

1. **Servo Sweep** – All four servos sweep simultaneously between 40° and 140° over approximately 2 seconds.
2. **Servo Hold** – All four servos move to and maintain a fixed position of 90°.

## Hardware

* Arduino Uno
* 4 × Servo motors
* Jumper wires
* External 5 V power supply (recommended for multiple servos)

## Software

* TinkerCad
* Servo library (`#include <Servo.h>`)

## Program 1: Servo Sweep

The sweep program moves all four servos together from 40° to 140° and back to 40°. The movement is achieved by gradually increasing and decreasing the servo angle inside a `for` loop with a short delay between each step. The delay is set so that one complete sweep cycle takes approximately 2 seconds.

### Purpose

* Demonstrate simultaneous control of multiple servos.
* Produce smooth servo motion using incremental position updates.

## Program 2: Hold at 90°

The second program positions all four servos at 90°, using a `while` loop. Once commanded, the servos maintain this angle.

### Purpose

* Demonstrate setting and holding a fixed servo position.
* Verify correct wiring and servo operation.

## Learning Outcomes

* Control multiple servo motors using the Arduino Servo library.
* Use `attach()` to assign servos to digital pins.
* Control servo position with the `write()` function.
* Create smooth motion using loops and delays.
* Understand the difference between continuous movement (sweep) and holding a fixed position.

The project successfully demonstrated two fundamental methods of servo control: sweeping through a range of motion and holding a fixed position. These techniques provide the foundation for more advanced robotics and automation applications involving multiple servo motors.
