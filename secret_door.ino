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
int button_order[] = {0, 0, 0};

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
  
  if (button_order[0] == 0 && button_order[1] == 0 && button_order[2] == 0) {
    //Serial.println("The sequence is empty");
    if (first == HIGH){
      use_buzzer();
      button_order[0] = 1;
    } else if (second == HIGH) {
      use_buzzer();
      button_order[0] = 2;
    } else if (third == HIGH) {
      use_buzzer();
      button_order[0] = 3;
    }
  }
  
  
  else if (button_order[0] != 0 && button_order[1] == 0 && button_order[2] == 0) {
    //Serial.println("2 digits remaining");
    if (first == HIGH){
      use_buzzer();
      button_order[1] = 1;
    } else if (second == HIGH) {
      use_buzzer();
      button_order[1] = 2;
    } else if (third == HIGH) {
      use_buzzer();
      button_order[1] = 3;
    }
  }
  
  
  else if (button_order[0] != 0 && button_order[1] != 0 && button_order[2] == 0) {
    //Serial.println("One digit remaining");
    if (first == HIGH){
      use_buzzer();
      button_order[2] = 1;
    } else if (second == HIGH) {
      use_buzzer();
      button_order[2] = 2;
    } else if (third == HIGH) {
      use_buzzer();
      button_order[2] = 3;
    }
  }
  
  else {
    if (button_order[0] == 2 && button_order[1] == 1 && button_order[2] == 3) {
      digitalWrite(green_led, HIGH);
      Serial.println("The sequence is correct");
    }
    else {
      digitalWrite(red_led, HIGH);
      Serial.println("The sequence is wrong");
    }
  }
}

void use_buzzer() {
  tone(buzzer, 500);
  delay(250);
  noTone(buzzer);
}