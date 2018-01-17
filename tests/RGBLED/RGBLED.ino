/*
 * 
 * Copyright 2018 Marco Colussi
 * This file is part of DAMS_01.
 * 
 */
 
const int GREEN = 10;  
const int BLUE = 9;  
const int RED = 8;  
  
void setup() {
  pinMode(GREEN, OUTPUT);  
  pinMode(BLUE, OUTPUT);  
  pinMode(RED, OUTPUT);  
  
  digitalWrite(GREEN, HIGH);  
  digitalWrite(BLUE, HIGH);  
  digitalWrite(RED, HIGH);
  Serial.begin(9600);
  
  
}  

void loop() {  
    analogWrite( GREEN, 255);
    analogWrite( RED, 0);  
    analogWrite( BLUE, 0);
    Serial.print("VERDE\n");
    delay(1000);
    
    analogWrite( GREEN, 0);  
    analogWrite( RED, 255);
    analogWrite( BLUE, 0);
    Serial.print("ROSSO\n");  
    delay(1000);
    
    analogWrite( GREEN, 0);  
    analogWrite( RED, 0);
    analogWrite( BLUE, 255);
    Serial.print("BLUE\n");  
    delay(1000);
    
    analogWrite( RED, 153);
    analogWrite( GREEN, 0);  
    analogWrite( BLUE, 255);
    Serial.print("VIOLA\n");
    delay(1000);
    
    analogWrite( GREEN, 102);  
    analogWrite( RED, 102);
    analogWrite( BLUE, 102);
    Serial.print("GRIGIO\n"); 
    delay(1000);
    analogWrite( GREEN, 255);  
    analogWrite( RED, 102);
    analogWrite( BLUE, 0);
    Serial.print("ARANCIONE\n");
    delay(3000);
}
