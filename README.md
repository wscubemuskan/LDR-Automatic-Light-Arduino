# LDR Automatic Light – Task 2

## 📌 Project Overview

This project demonstrates an **LDR Automatic Light System using Arduino Uno**. The LDR detects the surrounding light intensity, and the Arduino automatically controls an LED according to the detected light level.

## 🎯 Objective

To design and simulate an automatic lighting system using an **LDR (Light Dependent Resistor)** and **Arduino Uno**, where the LED turns ON when the light intensity is low and turns OFF when the light intensity is high.

## 🔧 Components Used

- Arduino Uno
- LDR (Photoresistor)
- LED
- Resistor
- Jumper Wires
- USB Power Supply

## ⚙️ Working

The LDR senses the surrounding light intensity and sends an analog value to the Arduino through **A0**.

- When the LDR value is **500 or less**, the LED turns **ON**.
- When the LDR value is **greater than 500**, the LED turns **OFF**.
- The light intensity value is displayed on the **Serial Monitor**.

## 🔌 Pin Connections

| Component | Arduino Pin |
|-----------|-------------|
| LED | Digital Pin 13 |
| LDR | Analog Pin A0 |
| LDR Circuit | 5V and GND |

## 📷 Project Simulation

### Circuit Diagram – Light Detection

![Circuit Diagram 1](circuit-diagram-1.jpg)

*Figure 1: LDR Automatic Light circuit simulation showing the Arduino Uno, LDR, LED, resistor, and wiring connections.*

### Circuit Diagram – Light Condition

![Circuit Diagram 2](circuit-diagram-2.jpg)

*Figure 2: LDR Automatic Light simulation showing the circuit under a different light condition.*

### Arduino Code & Simulation

![Arduino Code](arduino-code.jpg)

*Figure 3: Arduino code and simulation interface used for the LDR Automatic Light project.*

## 🛠️ Tool Used
Tinkercad

## 📚 Internship Task

**Task 2 – LDR Automatic Light**
