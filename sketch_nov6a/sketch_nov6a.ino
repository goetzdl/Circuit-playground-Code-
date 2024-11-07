#include <Adafruit_CircuitPlayground.h>

void setup() {
  CircuitPlayground.begin(); // Initialize Circuit Playground
}

void loop() {
  int touchValue = CircuitPlayground.readCap(1);

  // Only activate if the touchValue is high enough and stable
  if (touchValue > 500) { // high value to detect touch 
    // Play a tone and blink LEDs
    CircuitPlayground.playTone(262, 300); // Play C4 for 300ms
    CircuitPlayground.setPixelColor(0, 255, 0, 0); // Turn first LED red
    delay(300); // Keep LED on for the duration of the tone
    CircuitPlayground.clearPixels(); // Turn off LEDs

    delay(500); // delay to avoid playing multiple times 
  }
}