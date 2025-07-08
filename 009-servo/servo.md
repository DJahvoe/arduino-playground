# 🔄 What is a Servo Motor?

A **servo motor** is a type of geared motor that **can only rotate up to 180 degrees**. It's precise, controllable, and commonly used in robotics and automation.

---

## ⚙️ How Does It Work?

The servo is controlled by **electrical pulses** sent from a microcontroller like the **Arduino UNO R3**.

- These pulses tell the servo **which position** to move to.
- It doesn't spin continuously like a normal motor — instead, it rotates to a **specific angle** between 0° and 180°.

---

## 🔌 Servo Motor Wiring

A standard servo has **three wires**, each with a specific role:

| Wire Color | Purpose         | Connect To           |
|------------|------------------|----------------------|
| 🟤 Brown    | Ground (GND)     | GND pin on UNO R3    |
| 🔴 Red      | Power (+5V)      | 5V pin on UNO R3     |
| 🟠 Orange   | Signal (PWM)     | Digital Pin #9 (D9)  |

> Note: The **signal pin** must be connected to a **PWM-capable pin** (like D9) to control the angle accurately.

---

## 📦 Summary

- Rotates between **0° and 180°**
- Controlled by **PWM signal**
- Used in:
  - 🦾 Robotics arms  
  - 🚗 RC cars  
  - 🚪 Automated doors  
  - 🖱️ Pan/tilt camera mounts
