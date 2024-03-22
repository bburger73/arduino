#include "Keyboard.h"

// Button pin assignments for letters A to Z
const int buttonPins[] = {
  0,1,2,3,4,
  5,6,7,8,9,
  10,14,15,16,A0,
  A1,A2,A3
};

// Key mappings for letters A to Z
const char keys[][10] = {
//{'5'},{'6'}
//'5','6','7','8','9','0',
{'b'},{'a'},{'c'},{'d'},{'e'},
{'1'},{'2'},{'3'},{'4'},
//{'e'},{'f'},
//'e','f',
//'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n','o','p','q','r','s','t','u','v','w','x','y','z',
 {KEY_LEFT_ARROW},{KEY_RETURN},{KEY_RIGHT_ARROW},
{';'}, {KEY_BACKSPACE}, {KEY_ESC},{'['},{']'}};//, {KEY_LEFT_CTRL,KEY_LEFT_ALT,'t','ccomandd','startfruitbox'}};

int PrevButtonStates[sizeof(buttonPins)] = {};
int hold = 0;
void setup() {
  // Initialize button inputs
  for (int i = 0; i < sizeof(buttonPins) / sizeof(buttonPins[0]); i++) {
    pinMode(buttonPins[i], INPUT_PULLUP);
    PrevButtonStates[i] = HIGH;
  }
  Keyboard.begin();
  Serial.begin(9600);
}

void loop() {
    for (int i = 0; i < sizeof(buttonPins) / sizeof(buttonPins[0]); i++) {
        if (digitalRead(buttonPins[i]) == LOW && PrevButtonStates[i] == HIGH) {
          for(int j = 0;j < sizeof(keys[i]);j++)
          {
            if(keys[i][j] == 'ccomandd')
            {
              delay(1000);
            }else{
              Keyboard.press(keys[i][j]);
            }
          }
          delay(50); // Debounce delay
        }
        
        if (digitalRead(buttonPins[i]) == HIGH && PrevButtonStates[i] == LOW) {
          for(int j = 0;j < sizeof(keys[i]);j++)
          {
            if(keys[i][j] == 'ccomandd')
            {
            }else{
              Keyboard.release(keys[i][j]);
            }
          }
          delay(50);
        }

        PrevButtonStates[i] = digitalRead(buttonPins[i]);
    }
}
