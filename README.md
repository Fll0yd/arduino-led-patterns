🔴 Arduino LED Pattern Controller

A lightweight embedded system project demonstrating non-blocking timing, state-based logic, and dynamic LED behavior patterns using Arduino.

Instead of simple delay-based blinking, this project implements a pattern-driven LED controller using millis() for efficient, event-driven execution.

🚀 Features
⚡ Non-Blocking Execution
Uses millis() instead of delay()
Allows the system to remain responsive and extensible
🔁 Pattern-Based Blinking
Supports multiple LED patterns
Easily configurable timing and repetition
🧠 State-Driven Logic
Automatically cycles through patterns
Demonstrates embedded state machine concepts
🔧 Configurable Patterns
Define custom patterns with:
On time
Off time
Repeat count
🧪 Example Patterns
Pattern	Behavior
Fast Blink	100ms ON / 100ms OFF (5 times)
Slow Blink	500ms ON / 500ms OFF (5 times)

The system cycles between these patterns continuously.

📁 Project Structure
Arduino_LED_Patterns/
└── FastSlowBlink.ino   # Main Arduino sketch
▶️ How to Run
1. Requirements
Arduino board (Uno, Nano, etc.)
LED connected to pin 13 (or change in code)
Arduino IDE
2. Upload
Open FastSlowBlink.ino in Arduino IDE
Select your board + port
Click Upload
🧠 How It Works
Core Concepts Used
1. Non-Blocking Timing
millis()

Tracks elapsed time instead of pausing execution.

2. Pattern Struct
struct BlinkPattern {
    int onTime;
    int offTime;
    int repeat;
};

Encapsulates LED behavior into reusable definitions.

3. State Tracking
Current pattern index
Blink count
LED state (ON/OFF)
4. Event Loop Logic
Check elapsed time
Toggle LED
Advance pattern when complete
💡 Real-World Use Cases

This pattern system can be expanded into:

🚦 Status indicators (booting, idle, error, processing)
🤖 Robotics feedback systems
🏠 Smart home device signals
🔋 Battery / system health indicators
🛠️ Future Improvements (Notes to Future Me)

If you come back to this project, here’s how to turn it into something seriously impressive:

🔥 1. Add Button Input (Interaction Layer)
Press button → switch patterns
Long press → reset system
⚙️ 2. Expand Pattern Library

Add patterns like:

Solid ON (error state)
Pulse fade (PWM)
SOS Morse pattern
🧠 3. Convert to Full State Machine

Replace simple indexing with:

enum SystemState {
    BOOTING,
    IDLE,
    PROCESSING,
    ERROR
};

Tie LED behavior to system state.

🎛️ 4. External Configuration
Store patterns in EEPROM
Or receive via serial input
📡 5. Serial Control

Control patterns via Serial Monitor:

SET PATTERN FAST
SET PATTERN ERROR
🤖 6. Integrate with Snowball

Use this as:

Physical status indicator
Visual feedback system for AI states
⚠️ Known Limitations
Single LED only
No external input (yet)
No persistence across resets
Limited UI (hardware-only)
