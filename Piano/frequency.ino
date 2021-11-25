void frequency(){
      val2 =analogRead(A1);
    y = map(val2,0,1023,1000,10000);
    tone(12, y, s);
    lcd.setCursor(12,1);
    lcd.print(y);
    
}

