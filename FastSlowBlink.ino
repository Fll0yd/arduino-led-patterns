const int LED_PIN = 13;

struct BlinkPattern {
    int onTime;
    int offTime;
    int repeat;
};

BlinkPattern patterns[] = {
    {100, 100, 5},   // Fast
    {500, 500, 5}    // Slow
};

int currentPattern = 0;
int blinkCount = 0;
bool ledState = false;

unsigned long previousMillis = 0;
int interval = 100;

void setup() {
    pinMode(LED_PIN, OUTPUT);
}

void loop() {
    unsigned long currentMillis = millis();

    if (currentMillis - previousMillis >= interval) {
        previousMillis = currentMillis;

        ledState = !ledState;
        digitalWrite(LED_PIN, ledState);

        if (ledState == false) {
            blinkCount++;

            if (blinkCount >= patterns[currentPattern].repeat) {
                blinkCount = 0;
                currentPattern = (currentPattern + 1) % 2;
            }
        }

        interval = ledState ? patterns[currentPattern].onTime
                            : patterns[currentPattern].offTime;
    }
}
