#include <SoftwareSerial.h>

SoftwareSerial mySerial(10, 11);

void setup() {
  mySerial.begin(9600);
  DDRD |= 0xF0;
}

void loop() {
  if (mySerial.available()) {
    byte control;
    switch (mySerial.read()) {
      case '+': control = 0xA0; break;
      case '#': control = 0x00; break;
      case '-': control = 0x50; break;
      case '<': control = 0x90; break;
      case '>': control = 0x60; break;
      default:  control = 0xF0;
    }
    PORTD = PORTD & 0x0F | control;
  }
}
