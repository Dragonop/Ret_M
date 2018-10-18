// Example demonstrating the capabilities of using Ret_M instead of regular delays
// By Carlos Joaquin Villalba, 18 October 2018
// Makes the built-in led blink in intervals of 500 miliseconds
#include "Ret_M.h" //We include the library

//We declare the delay (miliseconds):
Ret_M d1(500);  // 500 miliseconds

bool state; // Variable used to change the state of the LED

void setup() {
  pinMode(LED_BUILTIN, OUTPUT); // Built-in LED pin as output
}

void loop() {
 // If the interval has passed, 
 // invert the value of "state"
 // and use its value to light the LED
  if (d1.ret() == true){
    state = !state;
    digitalWrite(13,state);
    }
}
