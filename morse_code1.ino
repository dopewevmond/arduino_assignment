int buzzer = 8;
int first_button = 2;
int second_button = 3;
int morse_unit = 250;

int first, second;

void setup()
{
  for (int i = 8; i > 5; i --) {
    pinMode(i, OUTPUT);
  }
  
  for (int i = 4; i > 1; i--) {
    pinMode(i, INPUT);
  }
}

void loop()
{
  first = digitalRead(first_button);
  second = digitalRead(second_button);
  
  if (first == HIGH) {
    //output WEVAMWO in morse code
    //w
    dot(1);
    for (int i = 0; i < 2; i++) {
      dash(1);
    }
    delay(morse_unit * 2);
    
    //e
    dot(3);
    
    //v
    for (int i = 0; i < 3; i++) {
      dot(1);
    }
    dash(3);
    
    //a
    dot(1);
    dash(3);
    
    //m
    dash(1);
    dash(3);
    
    //w
    dot(1);
    for (int i = 0; i < 2; i++) {
      dash(1);
    }
    delay(morse_unit * 2);
    
    //o
    for (int i = 0; i < 3; i++) {
      dash(1);
    }
    delay(morse_unit * 2);
  } 
  
  else if (second == HIGH) {
    //output 10736842 in morse code
    //1
    dot(1);
    for (int i = 0; i < 4; i++) {
      dash(1);
    }
    delay(morse_unit * 2);
    
    //0
    for (int i = 0; i < 5; i++) {
      dash(1);
    }
    delay(morse_unit * 2);
    
    //7
    for (int i = 0; i < 2; i++) {
      dash(1);
    }
    for (int i = 0; i < 3; i++) {
      dot(1);
    }
    delay(morse_unit * 2);
    
    //3
    for (int i = 0; i < 3; i++) {
      dot(1);
    }
    for (int i = 0; i < 2; i++) {
      dash(1);
    }
    delay(morse_unit * 2);
    
    //6
    dash(1);
    for (int i = 0; i < 4; i++) {
      dot(1);
    }
    delay(morse_unit * 2);
    
    //8
    for (int i = 0; i < 3; i++) {
      dash(1);
    }
    for (int i = 0; i < 2; i++) {
      dot(1);
    }
    delay(morse_unit * 2);
    
    //4
    for (int i = 0; i < 5; i++) {
      dot(1);
    }
    dash(3);
    
    //2
    for (int i = 0; i < 2; i++) {
      dot(1);
    }
    for (int i = 0; i < 3; i++) {
      dash(1);
    }
    delay(morse_unit * 2);
  }
}

void dot(int del) {
  tone(buzzer, 200);
  delay(morse_unit);
  noTone(buzzer);
  delay(morse_unit * del);
}

void dash (int del) {
  tone(buzzer, 200);
  delay(morse_unit * 3);
  noTone(buzzer);
  delay(morse_unit * del);
}