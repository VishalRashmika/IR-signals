int pushbutton = 8;

void setup() {
  Serial.begin(9600);
  pinMode(pushbutton, INPUT);
}

int state = 0;

void loop() {
  int Buttonstate = digitalRead(pushbutton);

  if (state ==0 && Buttonstate==0){
    state = 1;
  } else if (state==1){
    Serial.print(micros());
    Serial.print(',');
    Serial.println(Buttonstate);
  }

  delay(1);
}
