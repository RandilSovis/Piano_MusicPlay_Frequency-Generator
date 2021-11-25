 
 void piano(){
 val1 = analogRead(A0);
if(val1<=146) {
       lcd.setCursor(14,1);
     lcd.print(" 1");
     for (int i = 2; i < 10; i++) {
    val = digitalRead(i);
    if (val == HIGH) {
    tone(12, notes1[i], s);
; 
    }
   }
}else if(val1<=292){
          lcd.setCursor(14,1);
     lcd.print(" 2"); 
     for (int i = 2; i < 10; i++) {
    val = digitalRead(i);
    if (val == HIGH) {
    tone(12, notes2[i], s);

    }
   }
}else if(val1<=438){
          lcd.setCursor(14,1);
     lcd.print(" 3");
     for (int i = 2; i < 10; i++) {
    val = digitalRead(i);
    if (val == HIGH) {
    tone(12, notes3[i], s);
 
    }
   }
}else if(val1<=584){
          lcd.setCursor(14,3);
     lcd.print(" 4"); 
     for (int i = 2; i < 10; i++) {
    val = digitalRead(i);
    if (val == HIGH) {
    tone(12, notes4[i], s);
    }
   }
}else if(val1<=730){
          lcd.setCursor(14,4);
     lcd.print(" 5"); 
     for (int i = 2; i < 10; i++) {
    val = digitalRead(i);
    if (val == HIGH) {
    tone(12, notes5[i], s);

    }
   }
}else if(val1<=876){
          lcd.setCursor(14,1);
     lcd.print(" 6"); 
     for (int i = 2; i < 10; i++) {
    val = digitalRead(i);
    if (val == HIGH) {
    tone(12, notes6[i], s);

    }
   }
}else{
     for (int i = 2; i < 10; i++) {
              lcd.setCursor(14,1);
     lcd.print(" 7"); 
    val = digitalRead(i);
    if (val == HIGH) {
    tone(12, notes7[i], s);

    }
   }
}
 }
