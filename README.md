# Water Tank & Gas Monitoring System
An Arduino-based monitoring system that tracks water tank level (via ultrasonic distance sensing) and gas concentration, displaying live readings on an I2C LCD.

## Components Used
- Arduino (Uno/Nano)
- Ultrasonic Sensor (HC-SR04) — trig/echo pins
- Water Level Sensor (analog)
- MQ Gas Sensor (analog)
- 16x2 LCD with I2C module

## How It Works
- An ultrasonic sensor measures distance to the water surface (via trigger/echo pulse timing) to estimate tank fill level.
- An analog water level sensor gives a secondary raw water level reading.
- A gas sensor continuously monitors air quality/gas concentration.
- All readings (water level, distance in cm, gas value) are displayed live on a 16x2 I2C LCD.

## Protocols/Concepts Used
- I2C communication (LCD via LiquidCrystal_I2C library)
- Ultrasonic sensing (trigger/echo timing, pulseIn)
- Analog sensor reading (water level, gas sensor)

## Code
See `WATERLEVEL_MONITORING_SYSYTEM.ino` for the full sketch.
