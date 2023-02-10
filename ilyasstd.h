BH1750 lightMeter;
int dutyCycle = 0;
const int PWMFreq = 50;
const int PWMChannel = 0;
const int PWMResolution = 8;

int currentstate = 7;
int rain_sensor = 34;
int led = 26;
int servoPin = 14;

int closeroof = 7;
int openroof = 32;
int rainValMax = 15;
int rainValMin = 10;
int luxValMax = 50;
int luxValMin = 30;

int openPin = 2;
int closePin = 4;
#define BLYNK_TEMPLATE_ID "TMPLDZpJn4zW"
#define BLYNK_DEVICE_NAME "Skripsi"
#define BLYNK_AUTH_TOKEN "bo6DS7DMqV2rdzHJh8NLfm60oYOxxxyl"

#define BLYNK_PRINT Serial

#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>
char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = "Polinema_hotspot_UKM";//Enter your WIFI name
char pass[] = "polinemaUKM";//Enter your WIFI password
BlynkTimer timer;
bool controllerState = true;
