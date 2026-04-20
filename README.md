💡 SlowFastBlink (Arduino LED Patterns)

A simple Arduino project that demonstrates custom LED blinking patterns using timed loops.
Designed to explore timing, control flow, and hardware interaction through programmable light sequences.

🚀 Overview

This project runs on an Arduino and controls an LED connected to a digital pin, producing two distinct blinking patterns:

Fast Blink Sequence
Rapid flashes (100ms intervals)
Slow Blink Sequence
Slower flashes (500ms intervals)

These sequences repeat continuously, creating a recognizable signal pattern.

🔧 Hardware Requirements
Arduino (Uno, Nano, or compatible)
LED
220Ω resistor
Breadboard + jumper wires
🔌 Wiring
Arduino Pin 13 → Resistor → LED → GND

Note: Pin 13 often has a built-in LED on many Arduino boards.

▶️ How to Run
Open the project in Arduino IDE
Connect your Arduino via USB
Select the correct:
Board
COM port
Upload FastSlowBlink.ino
🧠 Code Behavior
const int LED_PIN = 13;

void setup() {
    pinMode(LED_PIN, OUTPUT);
}

void loop() {
    // Fast blink (5 times)
    for (int i = 0; i < 5; i++) {
        digitalWrite(LED_PIN, HIGH);
        delay(100);
        digitalWrite(LED_PIN, LOW);
        delay(100);
    }

    // Slow blink (5 times)
    for (int i = 0; i < 5; i++) {
        digitalWrite(LED_PIN, HIGH);
        delay(500);
        digitalWrite(LED_PIN, LOW);
        delay(500);
    }
}
🎯 What This Demonstrates
GPIO control (digital output)
Timing using delay()
Loop-based pattern generation
Basic embedded programming concepts
🛠️ Notes to Future Me (How to Level This Up)

This is where things get fun.

🔥 Upgrade 1: Replace delay() with Non-Blocking Timing

Use millis() instead of delay() so the program can:

Handle input
Run multiple patterns simultaneously

👉 This is a core embedded skill.

🔥 Upgrade 2: Add Pattern Modes

Add multiple modes like:

SOS pattern (... --- ...)
Heartbeat pulse
Random flicker
Morse code encoder

Switch modes using:

Button input
Serial commands
🔥 Upgrade 3: Turn This Into a Signal System

Use LED patterns as status indicators:

Pattern	Meaning
Fast blink	Processing
Slow blink	Idle
Double flash	Error
Solid ON	Ready

👉 This ties directly into real-world systems (IoT, robotics, Snowball 👀)

🔥 Upgrade 4: Add Input (Buttons / Sensors)
Button → change pattern
Light sensor → adjust brightness
Motion sensor → trigger blinking
🔥 Upgrade 5: PWM / Brightness Control

Use:

analogWrite(pin, value);

Create:

Fade in/out
Pulse effects
Breathing LED
🔥 Upgrade 6: Integrate with Raspberry Pi / Snowball

This is where this tiny project becomes powerful:

Arduino = hardware controller
Raspberry Pi = brain

Use:

Serial communication
MQTT
GPIO triggers

👉 LED becomes:

“Snowball’s physical heartbeat”

⚙️ Medium Improvements
Extract patterns into functions
Create a pattern array system
Add configurable timing variables
🧪 Known Limitations
Uses blocking delays (delay())
No input handling
Single LED only
Hardcoded pattern logic
💡 Why This Project Matters

It may look simple, but it shows:

You understand hardware control
You can work outside pure software
You’re capable of building IoT / robotics systems

👉 This pairs perfectly with:

Your Raspberry Pi work
Your Snowball AI vision
Your embedded systems background
