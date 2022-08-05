#include <Keyboard.h>

//pin numbe    //easy to remember 
// 0,5,6,9      4, 3, 2, 1
// 7,3,2,10     8, 7, 6, 5

// Set button pins row 1
int buttonPin1 = 9;  
int buttonPin2 = 6;

void setup()
{
    // define button pins row 1
    pinMode(buttonPin1, INPUT);  // Set the button as an input
  digitalWrite(buttonPin1, HIGH);  // Pull the button high

    pinMode(buttonPin2, INPUT);  // Set the button as an input
  digitalWrite(buttonPin2, HIGH);  // Pull the button high
}

void loop()
{
  // runs the macro for button 1                                                                //buton 1
  if (digitalRead(buttonPin1) == 0)  // if the button goes low
  {
  Keyboard.press(KEY_LEFT_SHIFT);     // Press and hold the Windows key.  //https://www.arduino.cc/reference/en/language/functions/usb/keyboard/keyboardmodifiers/
  Keyboard.press(KEY_F12);              // Press and hold the 'r' key.
  delay(100);                       // Wait for the computer to register the press.
  Keyboard.releaseAll();            // Release both of the above keys.
  delay(500);                       // Wait for the Windows Run Dialog to open.
  }

    // runs the macro for button 2                                                              //buton 1
  if (digitalRead(buttonPin1) == 0)  // if the button goes low
  {
  Keyboard.press(KEY_LEFT_SHIFT);     // Press and hold the Windows key.  //https://www.arduino.cc/reference/en/language/functions/usb/keyboard/keyboardmodifiers/
  Keyboard.press(KEY_F12);              // Press and hold the 'r' key.
  delay(100);                       // Wait for the computer to register the press.
  Keyboard.releaseAll();            // Release both of the above keys.
  delay(500);                       // Wait for the Windows Run Dialog to open.
  }
}
