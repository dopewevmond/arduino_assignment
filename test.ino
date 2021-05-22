int buzzer = 8;
int button1 = 2;
int button2= 3;
int time_unit = 300;


int state1, state2;

void setup() {
	pinMode(buzzer, OUTPUT);
  	pinMode(button1, INPUT);
  	pinMode(button2, INPUT);
}

void loop () {
    state1 = digitalRead(button1);
    state2 = digitalRead(button2);

    if (state1 == HIGH) {
    //are you sick?
        //a
        dot();
        delay(time_unit);
        dash();
        delay(time_unit * 3);

        //r
        dot();
        delay(time_unit);
        dash();
        delay(time_unit);
        dot();
        delay(time_unit * 3);

        //e
        dot();
        delay(time_unit * 7);

        //y
        dash();
        delay(time_unit);
        dot();
        delay(time_unit);
        for (int i = 0; i < 2; i++) {
            dash();
            delay(time_unit);
        }
        delay(time_unit * 2);

        //o
        for (int i = 0; i < 3; i++) {
            dash();
            delay(time_unit);
        }
        delay(time_unit * 2);

        //u
        for (int i = 0; i < 2; i++) {
            dot();
            delay(time_unit);
        }
        dash();
        delay(time_unit * 6);

        //s
        for (int i = 0; i < 3; i++) {
            dot();
            delay(time_unit);
        }
        delay(time_unit * 3);

        //i
        for (int i = 0; i < 2; i++) {
            dot();
            delay(time_unit);
        }

        //c
        for (int i = 0; i < 2; i++) {
            dash();
            delay(time_unit);
            dot();
            delay(time_unit * 3);
        }

        //k
        dash();
        delay(time_unit);
        dot();
        delay(time_unit);
        dash();
        delay(time_unit * 3);

        //?
        for (int i = 0; i < 2; i++){
            dot();
            delay(time_unit);
        }
        for (int i = 0; i < 2; i++){
            dash();
            delay(time_unit);
        }
        for (int i = 0; i < 2; i++){
            dot();
            delay(time_unit);
        }

    }
    else if (state2 == HIGH) {
        //are you happy
        //a
        dot();
        delay(time_unit);
        dash();
        delay(time_unit * 3);

        //r
        dot();
        delay(time_unit);
        dash();
        delay(time_unit);
        dot();
        delay(time_unit * 3);

        //e
        dot();
        delay(time_unit * 7);

        //y
        dash();
        delay(time_unit);
        dot();
        delay(time_unit);
        for (int i = 0; i < 2; i++) {
            dash();
            delay(time_unit);
        }
        delay(time_unit * 2);

        //o
        for (int i = 0; i < 3; i++) {
            dash();
            delay(time_unit);
        }
        delay(time_unit * 2);

        //u
        for (int i = 0; i < 2; i++) {
            dot();
            delay(time_unit);
        }
        dash();
        delay(time_unit * 6);

        //h
        for (int i = 0; i < 4; i++) {
            dot();
            delay(time_unit);
        }

        //a
        dot();
        delay(time_unit);
        dash();
        delay(time_unit);

        //p
        dot();
        delay(time_unit);
        for (int i = 0; i < 2; i++) {
            dash();
            delay(time_unit);
        }
        dot();
        delay(time_unit);

        //p
        dot();
        delay(time_unit);
        for (int i = 0; i < 2; i++) {
            dash();
            delay(time_unit);
        }
        dot();
        delay(time_unit);

        //y
        dash();
        delay(time_unit);
        dot();
        delay(time_unit);
        for (int i = 0; i < 2; i++) {
            dash();
            delay(time_unit);
        }
        delay(time_unit * 2);

        //?
        for (int i = 0; i < 2; i++){
            dot();
            delay(time_unit);
        }
        for (int i = 0; i < 2; i++){
            dash();
            delay(time_unit);
        }
        for (int i = 0; i < 2; i++){
            dot();
            delay(time_unit);
        }
    }
}

void dot() {
    tone(buzzer, 500);
    delay(time_unit);
    noTone(buzzer);
}

void dash() {
    tone(buzzer, 500);
    delay(time_unit * 3);
    noTone(buzzer);
}