# 🔔 Touchless Doorbell

A touchless doorbell system that detects a person's presence using an IR sensor and activates a buzzer without requiring physical contact.

## 📌 Project Overview

The Touchless Doorbell is an Arduino-based automation project designed to provide a hygienic and convenient alternative to a traditional doorbell.

Instead of pressing a physical button, the system detects an object/person near the IR sensor. When detection occurs, the Arduino activates the buzzer for a short period.

## 🛠️ Components Used

- Arduino Uno
- IR Obstacle Sensor
- Buzzer
- Jumper Wires
- Breadboard
- USB Cable / Power Supply

## ⚙️ Working Principle

1. The IR sensor continuously monitors the area in front of the door.
2. When a person places their hand near the sensor, the sensor detects the object.
3. The sensor sends a signal to the Arduino.
4. The Arduino processes the signal.
5. The Arduino activates the buzzer.
6. After a short delay, the buzzer turns off automatically.

## 🔌 Circuit Connections

| Component | Arduino Pin |
|---|---|
| IR Sensor VCC | 5V |
| IR Sensor GND | GND |
| IR Sensor OUT | Digital Pin 2 |
| Buzzer Positive | Digital Pin 8 |
| Buzzer Negative | GND |

## 💻 Software

The project is programmed using the Arduino IDE.

### Program

The Arduino code is available in:

`touchless_doorbell.ino`

## 🚀 Applications

- Touchless doorbells
- Hygiene-focused environments
- Smart home automation
- Contactless control systems
- Public and commercial buildings

## 🔮 Future Improvements

- Add a relay to control a real doorbell
- Add an LED indicator
- Add an LCD/OLED display
- Use ESP32 for Wi-Fi connectivity
- Send notifications to a smartphone
- Add adjustable detection distance

## 👩‍💻 Author

**Snehal Parate**

---

⭐ If you find this project useful, consider giving the repository a star!
