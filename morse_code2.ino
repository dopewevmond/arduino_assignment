// C++ code
//

int buzzer = 8;
int first_button = 2;
int second_button = 3;
int morse_unit = 250;

int first, second;

//the first button "Am I content?"
//the second button "What is the sea level?"


void setup()
{
  Serial.begin(9600);
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
    //a
    dot(1);
    dash(3);
    
    //m
    dash(1);
    dash(7);
    
    //i
    for (int i = 0; i < 2; i++) {
      dot(1);
    }
    delay(morse_unit * 6);
    
    //c
    for (int i = 0; i < 2; i++) {
      dash(1);
      dot(1);
    }
    delay(morse_unit * 2);
    
    //o
    for (int i = 0; i < 3; i++) {
      dash(1);
    }
    delay(morse_unit * 2);
    
    //n
    dash(1);
    dot(3);
    
    //t
    dash(3);
    
    //e
    dot(3);
    
    //n
    dash(1);
    dot(3);
    
    //t
    dash(3);
    
    //?
    for (int i = 0; i < 2; i++) {
      dot(1);
    }
    for (int i = 0; i < 2; i++) {
      dash(1);
    }
    for (int i = 0; i < 2; i++) {
      dot(1);
    }
  } 
  
  else if (second == HIGH) {
    //ask "What is the sea level"
    
    //w
    dot(1);
    for (int i = 0 ; i < 2; i++) {
      dash(1);
    }
    delay(morse_unit * 2);
    
    //h
    for (int i = 0; i < 4; i++) {
      dot(1);
    }
    delay(morse_unit * 2);
    
    //a
    dot(1);
    dash(3);
    
    //t
    dash(7);
    
    //i
    for (int i = 0; i < 2; i++) {
      dot(1);
    }
    delay(morse_unit * 2);
    
    //s
    for (int i = 0; i < 3; i++) {
      dot(1);
    }
    delay(morse_unit * 6);
    
    //t
    dash(3);
    
    //h
    for (int i = 0; i < 4; i++) {
      dot(1);
    }
    delay(morse_unit * 2);
    
    //e
    dot(7);
    
    //s
    for (int i = 0; i < 3; i++) {
      dot(1);
    }
    delay(morse_unit * 2);
    
    //e
    dot(3);
    
    //a
    dot(1);
    dash(7);
    
    //l
    dot(1);
    dash(1);
    for (int i = 0; i < 2; i++) {
      dot(1);
    }
    delay(morse_unit * 2);
    
    //e
    dot(1);
    
    //v
    for (int i = 0; i < 3; i++) {
      dot(1);
    }
    dash(3);
    
    //e
    dot(3);
    
    //l
    dot(1);
    dash(1);
    for (int i = 0; i < 2; i++) {
      dot(1);
    }
    delay(morse_unit * 2);
    
    //?
    for (int i = 0; i < 2; i++) {
      dot(1);
    }
    for (int i = 0; i < 2; i++) {
      dash(1);
    }
    for (int i = 0; i < 2; i++) {
      dot(1);
    }
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