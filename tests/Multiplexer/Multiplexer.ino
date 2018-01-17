/*
 * 
 * Copyright 2018 Marco Colussi
 * This file is part of DAMS_01.
 * 
 */

const int totChannels = 16;
const int addressA = 4;
const int addressB = 5;
const int addressC = 6;
const int addressD = 7;

int A = 0;      
int B = 0;      
int C = 0;      
int D = 0;

void setup() {
  Serial.begin(9600);
  pinMode(addressA, OUTPUT);
  pinMode(addressB, OUTPUT);
  pinMode(addressC, OUTPUT);
  pinMode(addressD, OUTPUT);
  pinMode(A0, INPUT);
}

void loop() {
  for(int i=0; i<totChannels; i++){
    A = bitRead(i,0); //Take first bit from binary value of i channel.
    B = bitRead(i,1); //Take second bit from binary value of i channel.
    C = bitRead(i,2); //Take third bit from value of i channel.
    D = bitRead(i,3); //Take fouth bit from value of i channel
    
    digitalWrite(addressA, A);
    digitalWrite(addressB, B);
    digitalWrite(addressC, C);
    digitalWrite(addressD, D);
    Serial.print("Channel ");
    Serial.print(i);
    Serial.print(" value: ");
    Serial.println(analogRead(A0));
  }
  delay(5000);
}
