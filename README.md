# 💡 LDR Automatic Light – Task 2

## 📌 Project Overview

This project demonstrates an **LDR-based Automatic Light System using Arduino Uno**. The LDR (Light Dependent Resistor) detects the surrounding light intensity, and the Arduino automatically controls an LED based on the detected light level.

The project was developed and tested using an **Online Arduino Circuit Simulator**.

## 🎯 Objective

To design and simulate an automatic lighting system in which the LED responds automatically to the surrounding light intensity detected by the LDR.

## 🔧 Components Used

- Arduino Uno
- LDR (Photoresistor)
- LED
- Resistor
- Jumper Wires

## 🔌 Pin Connections

| Component | Arduino Pin |
|---|---|
| LED | Digital Pin 13 |
| LDR | Analog Pin A0 |
| LDR Circuit | 5V and GND |

## ⚙️ Working Principle

The LDR senses the amount of light present in the surrounding environment.

- When the detected light level is **low**, the Arduino turns the LED **ON**.
- When sufficient light is detected, the Arduino turns the LED **OFF**.
- The Arduino reads the LDR value through **Analog Pin A0** and controls the LED through **Digital Pin 13**.

## 📷 Project Images

### Circuit Diagram

[![Circuit Diagram](./circuit-diagram.jpeg)](./circuit-diagram.jpeg)

### Light Detected – LED Response

[![Light Detected – LED Response](./light-detected.jpeg)](./light-detected.jpeg)

### No Light Detected – LED OFF

[![No Light Detected – LED OFF](./no-light-detected.jpeg)](./no-light-detected.jpeg)

## 🛠️ Tool Used

**Online Arduino Circuit Simulator**

## 📚 Internship Task

**Task 2 – LDR Automatic Light**

## ✅ Result

The LDR-based automatic lighting system was successfully simulated. The LED responds automatically according to the light intensity detected by the LDR.

## 🌟 Conclusion

This project demonstrates the basic concept of **automatic light control using an LDR and Arduino Uno**. It provides practical understanding of sensors, analog input, and automatic control using Arduino.
