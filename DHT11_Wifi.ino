#define BLYNK_PRINT Serial    
#include <SPI.h>
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = ""; /* Token do blynk */

char ssid[] = ""; /* Nome Wifi */
char pass[] = "";  /* Senha Wifi */
         
#define LED 8 /* Definir pinos que seram usados */
#define LED 7
#define LED 6

void setup()
{
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass); /* fazer com que o esp se conecte a internet */
  pinMode(D8,OUTPUT); /* definir os pinos como input ou output */
  pinMode(D7,OUTPUT);
  pinMode(D6,OUTPUT);
}

void loop()
{
  Blynk.run(); /* rodar o blynk */
}
