// Simple Multi-Tasking

#include <Metro.h> // Include Metro Library

const short pin1 = 9;  // Define led pin1 example 9
const short pin2 = 10;  // Define led pin2 examle 10
const short pin3 = 11;  // Define led pin3 example 11

bool state1 = false;  // Define state1 as false for pin1 and it cause in the first use led off until pass the time
bool state2 = true;  // Define state2 as true for pin2 and it cause in the first use led on until pass the time
bool state3 = false;  // Define state3 as false for pin3 and it cause in the first use led off until pass the time

Metro metro1 = Metro(500);  // Define Metro1 for pin1 and give it some milliseconds example 500
Metro metro2 = Metro(500); // Define Metro2 for pin2 and give it some milliseconds example 500
Metro metro3 = Metro(500); // Define Metro3 for pin3 and give it some milliseconds example 500

void setup() {
  pinMode(pin1, OUTPUT);  // Set pin1 as led output
  pinMode(pin2, OUTPUT);  // Set pin2 as led output
  pinMode(pin3, OUTPUT);  // Set pin3 as led output
}

void loop() {
  if (metro1.check()){
    state1 = !state1;  // After checking millisecondes of metro1 set state1 in reverse position example from false to true
    digitalWrite(pin1, state1);  // Digital write pin1 as state1
    }

  if (metro2.check()){
    state2 = !state2;  // After checking millisecondes of metro2 set state2 in reverse position example from true to false
    digitalWrite(pin2, state2); // Digital write pin2 as state2
    }

    if (metro3.check()){
    state3 = !state3;  // // After checking millisecondes of metro3 set state3 in reverse position example from false to true
    digitalWrite(pin3, state3); // Digital write pin3 as state3
    }
}

// Good Luck Guys :)
