# LDR Automatic Light – Task 2

## Project Overview

This project demonstrates an **LDR Automatic Light System using Arduino Uno**. The system detects the surrounding light intensity using an LDR (Light Dependent Resistor) and automatically controls an LED according to the detected light condition.

## Objective

To design and simulate an automatic lighting system using an **LDR and Arduino Uno**, where the LED responds automatically to changes in light intensity.

## Components Used

- Arduino Uno
- LDR (Light Dependent Resistor)
- LED
- Resistor
- Jumper Wires
- Power Supply

## Working

The LDR senses the surrounding light intensity and sends the corresponding analog value to the Arduino through **A0**.

The Arduino compares the sensor value with a predefined threshold and controls the LED accordingly.

- When the detected light condition meets the required threshold, the LED responds accordingly.
- The LED status changes automatically based on the LDR reading.
- The sensor value can be monitored through the Serial Monitor.

## Pin Connections

| Component | Arduino Pin |
|---|---|
| LED | Digital Pin 13 |
| LDR | Analog Pin A0 |
| LDR Circuit | 5V and GND |

## Project Images

### Circuit Diagram

![Circuit Diagram](circuit-diagram-1.jpg)

### Light Detected – LED Response

![Light Detected – LED Response](circuit-diagram-2.jpg)

### No Light Detected – LED OFF

![No Light Detected – LED OFF](circuit-diagram-3.jpg)

## Tool Used

Online Arduino Circuit Simulator

## Internship Task

**Task 2 – LDR Automatic Light**
