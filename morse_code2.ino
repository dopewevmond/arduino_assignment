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
    //ask the question
    //a
    short_beep();
    delay(morse_unit);
    long_beep();
    delay(morse_unit * 3);
    
    //m
    long_beep();
    delay(morse_unit);
    long_beep();
    delay(morse_unit * 7);
    
    //i
    for (int i = 0; i < 2; i++) {
      short_beep();
      delay(morse_unit);
    }
    delay(morse_unit * 6);
    
    //c
    for (int i = 0; i < 2; i++) {
      long_beep();
      delay(morse_unit);
      short_beep();
      delay(morse_unit);
    }
    delay(morse_unit * 2);
    
    //o
    for (int i = 0; i < 3; i++) {
      long_beep();
      delay(morse_unit);
    }
    delay(morse_unit * 2);
    
    //n
    long_beep();
    delay(morse_unit);
    short_beep();
    delay(morse_unit * 3);
    
    //t
    long_beep();
    delay(morse_unit * 3);
    
    //e
    short_beep();
    delay(morse_unit * 3);
    
    //n
    long_beep();
    delay(morse_unit);
    short_beep();
    delay(morse_unit * 3);
    
    //t
    long_beep();
    delay(morse_unit * 3);
    
    //?
    for (int i = 0; i < 2; i++) {
      short_beep();
      delay(morse_unit);
    }
    for (int i = 0; i < 2; i++) {
      long_beep();
      delay(morse_unit);
    }
    for (int i = 0; i < 2; i++) {
      short_beep();
      delay(morse_unit);
    }
  } 
  
  else if (second == HIGH) {
    //ask "What is the sea level"
    
    //w
    short_beep();
    delay(morse_unit);
    for (int i = 0 ; i < 2; i++) {
      long_beep();
      delay(morse_unit);
    }
    delay(morse_unit * 2);
    
    //h
    for (int i = 0; i < 4; i++) {
      short_beep();
      delay(morse_unit);
    }
    delay(morse_unit * 2);
    
    //a
    short_beep();
    delay(morse_unit);
    long_beep();
    delay(morse_unit * 3);
    
    //t
    long_beep();
    delay(morse_unit * 7);
    
    //i
    for (int i = 0; i < 2; i++) {
      short_beep();
      delay(morse_unit);
    }
    delay(morse_unit * 2);
    
    //s
    for (int i = 0; i < 3; i++) {
      short_beep();
      delay(morse_unit);
    }
    delay(morse_unit * 6);
    
    //t
    long_beep();
    delay(morse_unit * 3);
    
    //h
    for (int i = 0; i < 4; i++) {
      short_beep();
      delay(morse_unit);
    }
    delay(morse_unit * 2);
    
    //e
    short_beep();
    delay(morse_unit * 7);
    
    //s
    for (int i = 0; i < 3; i++) {
      short_beep();
      delay(morse_unit);
    }
    delay(morse_unit * 2);
    
    //e
    short_beep();
    delay(morse_unit * 3);
    
    //a
    short_beep();
    delay(morse_unit);
    long_beep();
    delay(morse_unit * 7);
    
    //l
    short_beep();
    delay(morse_unit);
    long_beep();
    delay(morse_unit);
    for (int i = 0; i < 2; i++) {
      short_beep();
      delay(morse_unit);
    }
    delay(morse_unit * 2);
    
    //e
    short_beep();
    delay(morse_unit * 3);
    
    //v
    for (int i = 0; i < 3; i++) {
      short_beep();
      delay(morse_unit);
    }
    long_beep();
    delay(morse_unit * 3);
    
    //e
    short_beep();
    delay(morse_unit * 3);
    
    //l
    short_beep();
    delay(morse_unit);
    long_beep();
    delay(morse_unit);
    for (int i = 0; i < 2; i++) {
      short_beep();
      delay(morse_unit);
    }
    delay(morse_unit * 2);
    
    //?
    for (int i = 0; i < 2; i++) {
      short_beep();
      delay(morse_unit);
    }
    for (int i = 0; i < 2; i++) {
      long_beep();
      delay(morse_unit);
    }
    for (int i = 0; i < 2; i++) {
      short_beep();
      delay(morse_unit);
    }
  }
}

void short_beep() {
  tone(buzzer, 200);
  delay(morse_unit);
  noTone(buzzer);
}

void long_beep () {
  tone(buzzer, 200);
  delay(morse_unit * 3);
  noTone(buzzer);
}