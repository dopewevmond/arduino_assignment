int buzzer = 8;
int green_led = 7;
int red_led = 6;
int first_button = 2;
int second_button = 3;
int third_button = 4;

int first, second, third;

//the correct sequence to open my door is
//second_button, first_button, third_button


//initializing an array to store the order in which the 
//buttons were pressed
int sequence[] = {0, 0, 0, 0};

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
  third = digitalRead(third_button);
  
  if (sequence[0] == 0 && sequence[1] == 0 && sequence[2] == 0 && sequence[3] == 0) {
    if (first == HIGH){
      beep();
      sequence[0] = 1;
    } else if (second == HIGH) {
      beep();
      sequence[0] = 2;
    } else if (third == HIGH) {
      beep();
      sequence[0] = 3;
    }
  }
  
  
  else if (sequence[0] != 0 && sequence[1] == 0 && sequence[2] == 0  && sequence[3] == 0) {
    if (first == HIGH){
      beep();
      sequence[1] = 1;
    } else if (second == HIGH) {
      beep();
      sequence[1] = 2;
    } else if (third == HIGH) {
      beep();
      sequence[1] = 3;
    }
  }
  
  
  else if (sequence[0] != 0 && sequence[1] != 0 && sequence[2] == 0 && sequence[3] == 0) {
    if (first == HIGH){
      beep();
      sequence[2] = 1;
    } else if (second == HIGH) {
      beep();
      sequence[2] = 2;
    } else if (third == HIGH) {
      beep();
      sequence[2] = 3;
    }
  }

  else if (sequence[0] != 0 && sequence[1] != 0 && sequence[2] != 0 && sequence[3] == 0) {
    if (first == HIGH){
      beep();
      sequence[3] = 1;
    } else if (second == HIGH) {
      beep();
      sequence[3] = 2;
    } else if (third == HIGH) {
      beep();
      sequence[3] = 3;
    }
  }
  
  else {
    if (sequence[0] == 2 && sequence[1] == 2 && sequence[2] == 1 && sequence[3] == 3) {
      digitalWrite(green_led, HIGH);
    }
    else {
      digitalWrite(red_led, HIGH);
    }
  }
}

void beep() {
  tone(buzzer, 500);
  delay(200);
  noTone(buzzer);
}