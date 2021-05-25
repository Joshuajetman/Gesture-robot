void setup() {
  // put your setup code here, to run once:
int GNDPin=A4; //Set Analog pin 4 as GND
}

void loop() {
  // put your main code here, to run repeatedly:
stop_();
}
void stop_()
{
Serial.println("");
Serial.println("STOP");
digitalWrite(Q1,LOW);
digitalWrite(Q2,LOW);
digitalWrite(Q3,LOW);
digitalWrite(Q4,LOW);
}
void forward()
{
Serial.println("");
Serial.println("Forward");
digitalWrite(Q1,HIGH);
digitalWrite(Q2,LOW);
digitalWrite(Q3,LOW);
digitalWrite(Q4,HIGH);
}
void backward()
{
Serial.println("");
Serial.println("Backward");
digitalWrite(Q1,LOW);
digitalWrite(Q2,HIGH);
digitalWrite(Q3,HIGH);
digitalWrite(Q4,LOW);
}
void left()
{
Serial.println("");
Serial.println("Left");
digitalWrite(Q1,HIGH);
digitalWrite(Q2,LOW);
digitalWrite(Q3,HIGH);
digitalWrite(Q4,LOW);
}
void right()
{
Serial.println("");
Serial.println("Right");
digitalWrite(Q1,LOW);
digitalWrite(Q2,HIGH);
digitalWrite(Q3,LOW);
digitalWrite(Q4,HIGH);
}
}
