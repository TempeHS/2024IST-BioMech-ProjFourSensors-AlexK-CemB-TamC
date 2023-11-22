#include <Keyboard.h>

void keyboardSetup() {
// make pin 2 an input and turn on the
  // pullup resistor so it goes high unless
  // connected to ground:
  pinMode(2, INPUT_PULLUP);
  // initialize control over the keyboard:
  Keyboard.begin();
}
void keyboardloop() {
  while (digitalRead(2) == HIGH) {
    // do nothing until pin 2 goes low
   
  }
  
  // new document:
  Keyboard.press(ctrlKey);
  Keyboard.press('n');
  
  Keyboard.releaseAll();
  // wait for new window to open:
  
}