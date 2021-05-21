// C++ code
//

int buzzer = 8;
int first_button = 2;
int second_button = 3;
int third_button = 4;

int first, second, third;

int notes[] = {500, 1000, 1500};

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
    tone(buzzer, notes[0]);
  }
  else if (second == HIGH) {
    tone(buzzer, notes[1]);
  }
  else if (third == HIGH) {
    tone(buzzer, notes[2]);
  }
  delay(100);
  noTone(buzzer);
}