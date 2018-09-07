const int greenButton = 2;
const int redButton = 3;
const int greenLed = 11;
const int redLed = 12;

int greenState = 0;
int redState = 0;

void setup () {
    pinMode(greenButton, INPUT);
    pinMode(redButton, INPUT);
    pinMode(greenLed, OUTPUT);
    pinMode(redLed, OUTPUT);
}

void loop() {
    greenState = digitalRead(greenButton);
    redState = digitalRead(redButton);

    // green button switches green led
    if (greenState == HIGH) {
        digitalWrite(greenLed, HIGH);
    } else {
        digitalWrite(greenLed, LOW);
    }

    // red button switches red led
    if (redState == HIGH) {
        digitalWrite(redLed, HIGH);
    } else {
        digitalWrite(redLed, LOW);
    }

    // both LEDs will blink alternatively when all buttons are pressed
    if (greenState == HIGH && redState == HIGH) {
        // light up green
        digitalWrite(greenLed, HIGH);
        // light off red
        digitalWrite(redLed, LOW);
        delay(1000);

        // light up red
        digitalWrite(redLed, HIGH);
        // light off green
        digitalWrite(greenLed, LOW);
        delay(1000);
    }
}
