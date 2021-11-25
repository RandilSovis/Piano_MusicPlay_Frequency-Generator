 #include "pitch.h"
 #include <Wire.h> 
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x3F,16,2);
int val1 =0;
int val2 =0;
int val3 =0;
int y=0;
int t = 10;
int s = 60;
int SR1=0;
int SR2=0;
int SR3=0;
int SR4=0;
int SR5=0;
int o = 0;
int val = 0; 
int notes1[] = {NOTE_C1, NOTE_D1, NOTE_E1, NOTE_F1, NOTE_G1, NOTE_A1, NOTE_B1 ,NOTE_C2 };
int notes2[] = {NOTE_C2, NOTE_D2, NOTE_E2, NOTE_F2, NOTE_G2, NOTE_A2, NOTE_B2 ,NOTE_C3 };
int notes3[] = {NOTE_C3, NOTE_D3, NOTE_E3, NOTE_F3, NOTE_G3, NOTE_A3, NOTE_B3 ,NOTE_C4};
int notes4[] = {NOTE_C4, NOTE_D4, NOTE_E4, NOTE_F4, NOTE_G4, NOTE_A4, NOTE_B4 ,NOTE_C5};
int notes5[] = {NOTE_C5, NOTE_D5, NOTE_E5, NOTE_F5, NOTE_G5, NOTE_A5, NOTE_B5 ,NOTE_C6};
int notes6[] = {NOTE_C6, NOTE_D6, NOTE_E6, NOTE_F6, NOTE_G6, NOTE_A6, NOTE_B6 ,NOTE_C7};
int notes7[] = {NOTE_C7, NOTE_D7, NOTE_E7, NOTE_F7, NOTE_G7, NOTE_A7, NOTE_B7 ,NOTE_C8};

void setup() {
  for (int i = 2; i < 10; i++) {
  pinMode(i, INPUT);
  } 
  pinMode(12, OUTPUT);
    lcd.init();                      
  lcd.init();
    lcd.backlight();
  lcd.setCursor(10,0);
  lcd.print(": Mode");   

}

void loop() {
      
      val3 =analogRead(A2);
  if (val3<=341){
      
      lcd.setCursor(0,0);
      lcd.print("PIANO     ");
      lcd.setCursor(0,1);
      lcd.print("Octave number:");
    piano();   
  }else if(val3<=682){
    
      lcd.setCursor(0,0);
      lcd.print("Songs     ");
      lcd.setCursor(0,1);
      lcd.print("                ");
    songs();
  }else{
   
      lcd.setCursor(0,0);
      lcd.print("Frequency");
      lcd.setCursor(0,1);
      lcd.print("VALUE     :     ");
    frequency();
  }
   
}

