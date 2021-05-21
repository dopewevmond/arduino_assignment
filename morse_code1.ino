// C++ code
//

int buzzer = 8;
int first_button = 2;
int second_button = 3;
int morse_unit = 250;

int first, second;

//the first button outputs the surname in morse code
//the second button outputs the index number in morse code


void setup()
{
  Serial.begin(9600);
  for (int i = 8; i > 5; i --) {
    pinMode(i, OUTPUT);
    Serial.println(i);
  }
  
  for (int i = 4; i > 1; i--) {
    pinMode(i, INPUT);
    Serial.println(i);
  }
}

void loop()
{
  first = digitalRead(first_button);
  second = digitalRead(second_button);
  
  if (first == HIGH) {
    //output WEVAMWO in morse code
    //w
    Serial.println("W");
    short_beep();
    delay(morse_unit);
    for (int i = 0; i < 2; i++) {
      long_beep();
      delay(morse_unit);
    }
    delay(morse_unit * 2);
    
    //e
    Serial.println("E");
    short_beep();
    delay(morse_unit * 3);
    
    //v
    Serial.println("V");
    for (int i = 0; i < 3; i++) {
      short_beep();
      delay(morse_unit);
    }
    long_beep();
    delay(morse_unit * 3);
    
    //a
    Serial.println("A");
    short_beep();
    delay(morse_unit);
    long_beep();
    delay(morse_unit * 3);
    
    //m
    Serial.println("M");
    long_beep();
    delay(morse_unit);
    long_beep();
    delay(morse_unit * 3);
    
    //w
    Serial.println("W");
    short_beep();
    delay(morse_unit);
    for (int i = 0; i < 2; i++) {
      long_beep();
      delay(morse_unit);
    }
    delay(morse_unit * 2);
    
    //o
    Serial.println("O");
    for (int i = 0; i < 3; i++) {
      long_beep();
      delay(morse_unit);
    }
    delay(morse_unit * 2);
  } 
  
  else if (second == HIGH) {
    //output 10736842 in morse code
    //1
    Serial.println("Morse 1");
    short_beep();
    delay(morse_unit);
    for (int i = 0; i < 4; i++) {
      long_beep();
      delay(morse_unit);
    }
    delay(morse_unit * 2);
    
    //0
    Serial.println("Morse 0");
    for (int i = 0; i < 5; i++) {
      long_beep();
      delay(morse_unit);
    }
    delay(morse_unit * 2);
    
    //7
    Serial.println("Morse 7");
    for (int i = 0; i < 2; i++) {
      long_beep();
      delay(morse_unit);
    }
    for (int i = 0; i < 3; i++) {
      short_beep();
      delay(morse_unit);
    }
    delay(morse_unit * 2);
    
    //3
	Serial.println("Morse 3");
    for (int i = 0; i < 3; i++) {
      short_beep();
      delay(morse_unit);
    }
    for (int i = 0; i < 2; i++) {
      long_beep();
      delay(morse_unit);
    }
    delay(morse_unit * 2);
    
    //6
    Serial.println("Morse 6");
    long_beep();
    delay(morse_unit);
    for (int i = 0; i < 4; i++) {
      short_beep();
      delay(morse_unit);
    }
    delay(morse_unit * 2);
    
    //8
    Serial.println("Morse 8");
    for (int i = 0; i < 3; i++) {
      long_beep();
      delay(morse_unit);
    }
    for (int i = 0; i < 2; i++) {
      short_beep();
      delay(morse_unit);
    }
    delay(morse_unit * 2);
    
    //4
    Serial.println("Morse 4");
    for (int i = 0; i < 5; i++) {
      short_beep();
      delay(morse_unit);
    }
    long_beep();
    delay(morse_unit * 3);
    
    //2
    Serial.println("Morse 2");
    for (int i = 0; i < 2; i++) {
      short_beep();
      delay(morse_unit);
    }
    for (int i = 0; i < 3; i++) {
      long_beep();
      delay(morse_unit);
    }
    delay(morse_unit * 2);
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