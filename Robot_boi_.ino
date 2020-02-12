void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}
void forward(){
  digitalWrite(11,HIGH);
  digitalWrite(12,HIGH);
  delay(500);
  digitalWrite(11,LOW);
  digitalWrite(12,LOW);
}
void left(){
  digitalWrite(10,HIGH);
  digitalWrite(11,HIGH);
  delay(500);
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
}
void right(){
  digitalWrite(12,HIGH);
  digitalWrite(13,HIGH);
  delay(500);
  digitalWrite(12,LOW);
  digitalWrite(13,LOW);
}
void reverse(){
  digitalWrite(10,HIGH);
  digitalWrite(13,HIGH);
  delay(500);
  digitalWrite(10,LOW);
  digitalWrite(13,LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  forward();
  right();
  left();
  reverse();
}
