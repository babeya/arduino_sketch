/*
 * Morse LED 
 * 
 * A LED blinking SOS in morse code 
 * Material: 
 * - 1 LED
 * - 1 Resistance 220 Ohm (at least, if less the LED can be damaged, more the LED will shine less)
 * - Wire & Prototyping board
 */

// digital port on the arduino on which the LED is plug
const int DIGITAL_PORT = 8;

// Duration of a small blink (.)  
const int SMALL_DURATION = 500;

// Duration of a long blink (-)  
const int LONG_DURATION = 2 * SMALL_DURATION;


/**
 * Repeat a sequence of blinking x times
 * times: Number of time to repeat 
 * duration: Duration of the LED beeing light up
 */
void repeat(int times, int duration) {
  int i = 0;

  while (i < times) {
    digitalWrite(DIGITAL_PORT, HIGH);
    delay(duration);
    digitalWrite(DIGITAL_PORT, LOW);
    delay(SMALL_DURATION);
    i++;
  }
}

void setup() {
  // Set pin number 8 to act as an Output
  pinMode(DIGITAL_PORT, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  // Morse the S
  repeat(3, SMALL_DURATION);
  // Morse the 0
  repeat(3, LONG_DURATION);
  // Morse the S
  repeat(3, SMALL_DURATION);  
}
