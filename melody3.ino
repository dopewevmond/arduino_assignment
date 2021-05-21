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
    //reverse of 1562
    sound(2);
    sound(6);
    sound(5);
    sound(1);
  }
  else if (second == HIGH) {
    //reverse of 3052
    sound(5);
    sound(2);
    sound(0);
    sound(3);
  }
  else if (third == HIGH) {
    //reverse of 4603
    sound(3);
    sound(0);
    sound(6);
    sound(4);
  }
  
}

void sound(int freq) {
  tone(buzzer, notes[freq]);
  delay(1000);
  noTone(buzzer);
}