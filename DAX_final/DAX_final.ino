/*
 pin connections:

 switchButton: digital 30
 vibrationSensor: digital 28
 motionSensor: digital 26
 dht11: digital 24
 switchBuzzer: digital 18
 gasSensor: A7
 waterSensor: A5 
 
 gsm rx: digital 9
 gsm tx: digital 8
  
 */
 
 
#include <ATX2.h>
#include <dht.h>

#include <Sim800L.h> //gsm
#include <SoftwareSerial.h> //gsm



dht DHT;
#define DHT11_PIN 24

#define RX  8 // rx ng board yan
#define TX  9 // tx ng board yan
Sim800L GSM(RX, TX); //gsm



//variable pinout
int switchButton = 30;
int vibrationSensor = 28;
int motionSensor = 26;
int switchBuzzer = 18; 
int gasSensor = A7;
int waterSensor = A5;

//value variables
int vibrationValue;
int motionValue;
int gasValue;
int waterValue;
double temperatureValue;
double humidityValue;
int fireValue;

int switchButtonValue;
int switchBuzzerValue;

//trigger variables
int gasTrigger = 150; 
int waterTrigger = 100; 
int temperatureTrigger = 33;  
int humidityTrigger = 60; 

int motionOnOff;

int counter = 1;


//gsm variables
char* text;
bool error; 

char* defaultPhoneNumber = "09777936587";
char* alertMessage = "Anomaly detected!";

char digit1;
char digit2;
char digit3;
char digit4;
char digit5;
char digit6;
char digit7;
char digit8;
char digit9;
char digit10;
char digit11;


void setup() {
  // put your setup code here, to run once:
  OK();
  GSM.begin(4800);
  
  setTextSize(1);
  glcdClear();
  
  pinMode(switchButton, INPUT);
  pinMode(motionSensor, INPUT);
  pinMode(vibrationSensor, INPUT);
  
  //prefunctions
  getUserPhoneNumber();
  turnOnMotion();
  
  delay(10000); //for gsm module to connect to network
  glcdClear(); //or display sumtin (2.2)
}

void loop() {
  // put your main code here, to run repeatedly:
  readValues();
  triggerCheck();
}
