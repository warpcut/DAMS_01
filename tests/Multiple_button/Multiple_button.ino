/*
 * 
 * Copyright 2018 Marco Colussi
 * This file is part of DAMS_01.
 *  
 *          Analog pin 1
 *             |
 * Ground--1K--|--------|--------|-------|-------|
 *             |        |        |       |       |
 *            btn1     btn2     btn3    btn4    btn5
 *             |        |        |       |       |
 *          220 Ohm  470 Ohm    1 K     2.2K    4.7K
 *             |--------|--------|-------|-------|-- +5V
 */
int j = 1;
//---------!!!!!!!!!Values of the button might change, set it properly!!!!!----------
int Button[15][3] = {{1, 832, 838}, // button 1
                    {2, 688, 692}, // button 2
                    {3, 508, 511}, // button 3
                    {4, 313, 320}, // button 4
                    {5, 174, 176}, // button 5
                    {6, 886, 888}, // button 1 + button 2
                    {7, 864, 866}, // button 1 + button 3
                    {8, 850, 852}, // button 1 + button 4
                    {9, 842, 845}, // button 1 + button 5
                    {10, 771, 773}, // button 2 + button 3
                    {11, 734, 736}, // button 2 + button 4
                    {12, 711, 714}, // button 2 + button 5
                    {13, 603, 606}, // button 3 + button 4
                    {14, 558, 560}, // button 3 + button 5
                    {15, 405, 409}}; // button 4 + button 5
const int analogBtn = 1;
int label = 0;
int counter = 0;
long time = 0;
int current_state = 0;
int ButtonVal;

void setup(){
 Serial.begin(9600);

}

void loop(){
 if (millis() != time){
   ButtonVal = analogRead(analogBtn);
   if(ButtonVal == current_state && counter >0){
     counter--;
   }
   if(ButtonVal != current_state){
     counter++;
   }
     counter = 0;
     current_state = ButtonVal;
     if (ButtonVal > 2){
      Serial.println(ButtonVal);
       ButtonCheck();
     }
   time = millis();
 }
 
 delay(200);
}

void ButtonCheck(){
 for(int i = 0; i <= 15; i++){
   if(ButtonVal >= Button[i][j] && ButtonVal <= Button[i][j+1]){
     label = Button[i][0];
     Action();      
   }
 }
}

void Action(){
   Serial.print("Button: ");
   Serial.print(label);
}



