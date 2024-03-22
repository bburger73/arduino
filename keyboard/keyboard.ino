#include <USBMIDI.h>

void setup() {
  HID().begin();
  delay(200);
}

void loop() {
  // Simulate pressing and releasing the 'v' key
  USBMIDI().Keyboard().press(KEY_V);
  delay(1000);
  HID().Keyboard().releaseAll();
  delay(5000);
}