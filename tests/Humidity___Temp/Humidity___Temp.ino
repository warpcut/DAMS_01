/*
 * 
 * Copyright 2018 Marco Colussi
 * This file is part of DAMS_01.
 * 
 */

#include <dht.h>

dht DHT;

const int DHT11_PIN = 13;

void setup(){
  Serial.begin(9600);
}

void loop()
{
  int chk = DHT.read11(DHT11_PIN);
  Serial.print("Temperature = ");
  Serial.println(DHT.temperature);
  Serial.print("Humidity = ");
  Serial.println(DHT.humidity);
  delay(1000);
}
