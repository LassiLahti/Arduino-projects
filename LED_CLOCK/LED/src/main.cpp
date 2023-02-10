#include <Arduino.h>
#include <FastLED.h>

#define NUM_LEDS      77
#define LED_TYPE   WS2811
#define COLOR_ORDER   RGB
#define DATA_PIN        3
//#define CLK_PIN       4
//#define VOLTS          12
//#define MAX_MA       4000

void setup() {
  pinMode(DATA_PIN, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(DATA_PIN, 255);
}