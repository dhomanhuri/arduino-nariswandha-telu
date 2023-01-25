#include <Wire.h>
#include <BH1750.h>
#include "ilyasstd.h"

void setup() {
  Serial.begin(115200);
  Wire.begin();
  lightMeter.begin();
  pinMode(led,OUTPUT);
  pinMode(openPin,OUTPUT);
  pinMode(closePin,OUTPUT);
  pinMode(rain_sensor,INPUT);
  ledcSetup(PWMChannel, PWMFreq, PWMResolution);
  ledcAttachPin(servoPin, PWMChannel);
  ledcWrite(PWMChannel, dutyCycle);
  Blynk.begin(auth, ssid, pass);
  timer.setInterval(1000L, sendLux);
  delay(2000);
}

void loop() {
  Blynk.run();
  timer.run();
}
