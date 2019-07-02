int pin1 = 1;
int pin2 = 2;
int pin3 = 3;
int pin4 = 4;
int pin5 = 5;
int pin6 = 6;
int pin8 = 8;
int pin9 = 9;
int pin10 = 10;
int pin11 = 11;
int pin12 = 12;
int pin13 = 13;

int switchPin = 7;  //Pin for Start and Stop
int switchPinReset = 14; //Pin for Reset
boolean lastButton = LOW;  // To maintain the state 
boolean ledOn = false;    

int flag = 0, flagupper = 0;
int m, n, o, p, q, r;
int i, j, k, a, b, c;

void setup() {
  pinMode(pin1, OUTPUT);
  pinMode(pin2, OUTPUT);
  pinMode(pin3, OUTPUT);
  pinMode(pin4, OUTPUT);
  pinMode(pin5, OUTPUT);
  pinMode(pin6, OUTPUT);
  pinMode(pin8, OUTPUT);
  pinMode(pin9, OUTPUT);
  pinMode(pin10, OUTPUT);
  pinMode(pin11, OUTPUT);
  pinMode(pin12, OUTPUT);
  pinMode(pin13, OUTPUT);

  // for Start and Stop switch 
  pinMode(switchPin, INPUT);
  // for Reset switch 
  pinMode(switchPinReset, INPUT);

}

void loop() {

  start: for (m = 0; m < 2; ++m) {
    if (flagupper == 1)
      break;
    else {
      for (n = 0; n < 2; ++n) {
        for (o = 0; o < 2; ++o) {
          for (p = 0; p < 2; ++p) {
            for (q = 0; q < 2; ++q) {
              for (r = 0; r < 2; ++r) {
                startmin: if ((m == 1) && (n == 1) && (o == 1) && (p == 0) && (q == 1) && (r == 1))
                    flagupper = 1;
                  else if (flagupper == 0) {
                  digitalWrite(pin8, r);
                  digitalWrite(pin9, q);
                  digitalWrite(pin10, p);
                  digitalWrite(pin11, o);
                  digitalWrite(pin12, n);
                  digitalWrite(pin13, m);
                  flag = 0;
                }

                //for seconds
                for (i = 0; i < 2; ++i) {
                  if (flag == 1)
                    break;
                  else {
                    for (j = 0; j < 2; ++j) {
                      for (k = 0; k < 2; ++k) {
                        for (a = 0; a < 2; ++a) {
                          for (b = 0; b < 2; ++b) {
                            for (c = 0; c < 2; ++c) {
                              if (digitalRead(switchPinReset) == HIGH) {
                                digitalWrite(pin1, LOW);
                                digitalWrite(pin2, LOW);
                                digitalWrite(pin3, LOW);
                                digitalWrite(pin4, LOW);
                                digitalWrite(pin5, LOW);
                                digitalWrite(pin6, LOW);
                                digitalWrite(pin8, LOW);
                                digitalWrite(pin9, LOW);
                                digitalWrite(pin10, LOW);
                                digitalWrite(pin11, LOW);
                                digitalWrite(pin12, LOW);
                                digitalWrite(pin13, LOW);
                                goto start;
                              }

                              startsec:
                                if (digitalRead(switchPin) == HIGH && lastButton == LOW) {
                                  ledOn = !ledOn;
                                  lastButton = HIGH;
                                } else {
                                  lastButton = digitalRead(switchPin);
                                }
                              if (ledOn == true) {
                                if ((i == 1) && (j == 1) && (k == 1) && (a == 0) && (b == 1) && (c == 1))
                                  flag = 1;
                                else if (flag == 0) {
                                  digitalWrite(pin1, c);
                                  digitalWrite(pin2, b);
                                  digitalWrite(pin3, a);
                                  digitalWrite(pin4, k);
                                  digitalWrite(pin5, j);
                                  digitalWrite(pin6, i);
                                  delay(1000); // Wait for 1000 millisecond(s)
                                }
                              } else {
                                goto startsec;
                              }
                              delay(100);

                            }
                          }
                        }

                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }

}
