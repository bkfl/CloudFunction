#define LED_R D0
#define LED_G D1
#define LED_B D2

void setup() {
    // Set pin modes
    pinMode(LED_R, OUTPUT);
    pinMode(LED_G, OUTPUT);
    pinMode(LED_B, OUTPUT);
    // Register particle function
    Particle.function("toggleLed", toggleLed);
}

void loop() {
    
}

int toggleLed(String args) {
    if (args.equalsIgnoreCase("red")) {
        digitalWrite(LED_R, HIGH);
        digitalWrite(LED_G, LOW);
        digitalWrite(LED_B, LOW);
    }
    else if (args.equalsIgnoreCase("green")) {
        digitalWrite(LED_R, LOW);
        digitalWrite(LED_G, HIGH);
        digitalWrite(LED_B, LOW);
    }
    else if (args.equalsIgnoreCase("blue")) {
        digitalWrite(LED_R, LOW);
        digitalWrite(LED_G, LOW);
        digitalWrite(LED_B, HIGH);
    }
    return 0;
}
