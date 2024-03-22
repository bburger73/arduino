#include "Keyboard.h"

//declaring button pins
const int AButtonPin = 2;
const int BButtonPin = 3;
const int CButtonPin = 4;
const int DButtonPin = 5;
const int EButtonPin = 6;
const int FButtonPin = 7;
const int OneButtonPin = 8;
const int TwoButtonPin = 9;
const int ThreeButtonPin = 10;
const int FourButtonPin = 15;
const int FiveButtonPin = 16;
// const int SixButtonPin = ;
// const int SevenButtonPin = ;
// const int EightButtonPin = ;
// const int NineButtonPin = ;


const int EnterButtonPin = 14;
const int LeftButtonPin = 1;
const int RightButtonPin = 0;




int APreviousButtonState = HIGH;
int BPreviousButtonState = HIGH;
int CPreviousButtonState = HIGH;
int DPreviousButtonState = HIGH;
int EPreviousButtonState = HIGH;
int FPreviousButtonState = HIGH;
int OnePreviousButtonState = HIGH;
int TwoPreviousButtonState = HIGH;
int ThreePreviousButtonState = HIGH;
int FourPreviousButtonState = HIGH;
int FivePreviousButtonState = HIGH;
int EnterPreviousButtonState = HIGH;
int LeftPreviousButtonState = HIGH;
int RightPreviousButtonState = HIGH;

void setup() {                                                          
  //declare the buttons as input_pullup
  pinMode(AButtonPin, INPUT_PULLUP);  
  pinMode(BButtonPin, INPUT_PULLUP);  
  pinMode(CButtonPin, INPUT_PULLUP);  
  pinMode(DButtonPin, INPUT_PULLUP);  
  pinMode(EButtonPin, INPUT_PULLUP);  
  pinMode(FButtonPin, INPUT_PULLUP);  
  pinMode(OneButtonPin, INPUT_PULLUP);  
  pinMode(TwoButtonPin, INPUT_PULLUP);  
  pinMode(ThreeButtonPin, INPUT_PULLUP);  
  pinMode(FourButtonPin, INPUT_PULLUP);
  pinMode(FiveButtonPin, INPUT_PULLUP); 
  pinMode(EnterButtonPin, INPUT_PULLUP);  
  pinMode(LeftButtonPin, INPUT_PULLUP);  
  pinMode(RightButtonPin, INPUT_PULLUP);  
  Keyboard.begin();
}

void loop() {
  //checking the state of the button
  int AButtonState = digitalRead(AButtonPin);
  int BButtonState = digitalRead(BButtonPin);
  int CButtonState = digitalRead(CButtonPin);
  int DButtonState = digitalRead(DButtonPin);
  int EButtonState = digitalRead(EButtonPin);
  int FButtonState = digitalRead(FButtonPin);
  int OneButtonState = digitalRead(OneButtonPin);
  int TwoButtonState = digitalRead(TwoButtonPin);
  int ThreeButtonState = digitalRead(ThreeButtonPin);
  int FourButtonState = digitalRead(FourButtonPin);
  int FiveButtonState = digitalRead(FiveButtonPin);
  int EnterButtonState = digitalRead(EnterButtonPin);
  int RightButtonState = digitalRead(RightButtonPin);
  int LeftButtonState = digitalRead(LeftButtonPin);
  
 //replaces button press with UP arrow
  if (AButtonState == LOW && APreviousButtonState == HIGH) {
      // and it's currently pressed:
    Keyboard.press('a');
    delay(50);
  }
  if (BButtonState == LOW && BPreviousButtonState == HIGH) {
      // and it's currently pressed:
    Keyboard.press('b');
    delay(50);
  }
  if (CButtonState == LOW && CPreviousButtonState == HIGH) {
      // and it's currently pressed:
    Keyboard.press('c');
    delay(50);
  }
  if (DButtonState == LOW && DPreviousButtonState == HIGH) {
      // and it's currently pressed:
    Keyboard.press('d');
    delay(50);
  }
  if (EButtonState == LOW && EPreviousButtonState == HIGH) {
      // and it's currently pressed:
    Keyboard.press('e');
    delay(50);
  }
  if (FButtonState == LOW && FPreviousButtonState == HIGH) {
      // and it's currently pressed:
    Keyboard.press('f');
    delay(50);
  }
  if (OneButtonState == LOW && OnePreviousButtonState == HIGH) {
      // and it's currently pressed:
    Keyboard.press('1');
    delay(50);
  }
  if (TwoButtonState == LOW && TwoPreviousButtonState == HIGH) {
      // and it's currently pressed:
    Keyboard.press('2');
    delay(50);
  }
  if (ThreeButtonState == LOW && ThreePreviousButtonState == HIGH) {
      // and it's currently pressed:
    Keyboard.press('3');
    delay(50);
  }
  if (FourButtonState == LOW && FourPreviousButtonState == HIGH) {
      // and it's currently pressed:
    Keyboard.press('4');
    delay(50);
  }
  if (FiveButtonState == LOW && FivePreviousButtonState == HIGH) {
      // and it's currently pressed:
    Keyboard.press('5');
    delay(50);
  }
  if (EnterButtonState == LOW && EnterPreviousButtonState == HIGH) {
      // and it's currently pressed:
    Keyboard.press(KEY_KP_ENTER);
    delay(50);
  }
  if (LeftButtonState == LOW && LeftPreviousButtonState == HIGH) {
      // and it's currently pressed:
    Keyboard.press(KEY_LEFT_ARROW);
    delay(50);
  }
  if (RightButtonState == LOW && RightPreviousButtonState == HIGH) {
      // and it's currently pressed:
    Keyboard.press(KEY_RIGHT_ARROW);
    delay(50);
  }


//******************************************


  if (AButtonState == HIGH && APreviousButtonState == LOW) {
      // and it's currently released:
    Keyboard.release('a');
    delay(50);
  }
  if (BButtonState == HIGH && BPreviousButtonState == LOW) {
      // and it's currently released:
    Keyboard.release('b');
    delay(50);
  }
  if (CButtonState == HIGH && CPreviousButtonState == LOW) {
      // and it's currently released:
    Keyboard.release('c');
    delay(50);
  }
  if (DButtonState == HIGH && DPreviousButtonState == LOW) {
      // and it's currently released:
    Keyboard.release('d');
    delay(50);
  }
  if (EButtonState == HIGH && EPreviousButtonState == LOW) {
      // and it's currently released:
    Keyboard.release('e');
    delay(50);
  }
  if (FButtonState == HIGH && FPreviousButtonState == LOW) {
      // and it's currently released:
    Keyboard.release('f');
    delay(50);
  }
  if (OneButtonState == HIGH && OnePreviousButtonState == LOW) {
      // and it's currently released:
    Keyboard.release('1');
    delay(50);
  }
  if (TwoButtonState == HIGH && TwoPreviousButtonState == LOW) {
      // and it's currently released:
    Keyboard.release('2');
    delay(50);
  }
  if (ThreeButtonState == HIGH && ThreePreviousButtonState == LOW) {
      // and it's currently released:
    Keyboard.release('3');
    delay(50);
  }
  if (FourButtonState == HIGH && FourPreviousButtonState == LOW) {
      // and it's currently released:
    Keyboard.release('4');
    delay(50);
  }
  if (FiveButtonState == HIGH && FivePreviousButtonState == LOW) {
      // and it's currently released:
    Keyboard.release('5');
    delay(50);
  }
  if (EnterButtonState == HIGH && EnterPreviousButtonState == LOW) {
      // and it's currently released:
    Keyboard.release(KEY_KP_ENTER);
    delay(50);
  }
  
  if (EnterButtonState == HIGH && EnterPreviousButtonState == LOW) {
      // and it's currently released:
    Keyboard.release(KEY_RIGHT_ARROW);
    delay(50);
  }
  if (LeftButtonState == HIGH && LeftPreviousButtonState == LOW) {
      // and it's currently released:
    Keyboard.release(KEY_LEFT_ARROW);
    delay(50);
  }
 
  APreviousButtonState = AButtonState;
  BPreviousButtonState = BButtonState;
  CPreviousButtonState = CButtonState;
  DPreviousButtonState = DButtonState;
  EPreviousButtonState = EButtonState;
  FPreviousButtonState = FButtonState;
  OnePreviousButtonState = OneButtonState;
  TwoPreviousButtonState = TwoButtonState;
  ThreePreviousButtonState = ThreeButtonState;
  FourPreviousButtonState = FourButtonState;
  FivePreviousButtonState = FiveButtonState;

  EnterPreviousButtonState = EnterButtonState;
  RightPreviousButtonState = RightButtonState;
  LeftPreviousButtonState = LeftButtonState;

}