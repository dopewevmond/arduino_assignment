// C++ code
//

int buzzer = 8;
int first_button = 2;
int second_button = 3;
int third_button = 4;

int first, second, third;

int notes[] = {250, 400, 600, 850, 1000, 1250, 1450};

void setup()
{
  for (int i = 4; i > 1; i--) {
    pinMode(i, INPUT);
  }
  pinMode(buzzer, OUTPUT);
}

void loop()
{
  first = digitalRead(first_button);
  second = digitalRead(second_button);
  third = digitalRead(third_button);
  
  
  if (first == HIGH) {
    sound(1);
    sound(5);
    sound(6);
    sound(2);
  }
  else if (second == HIGH) {
    sound(3);
    sound(0);
    sound(2);
    sound(5);
  }
  else if (third == HIGH) {
    sound(4);
    sound(6);
    sound(0);
    sound(3);
  }
  
}

void sound(int freq) {
  tone(buzzer, notes[freq]);
  delay(1000);
  noTone(buzzer);
}