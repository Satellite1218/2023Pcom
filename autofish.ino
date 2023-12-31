#include <Servo.h>
Servo servo;
int alarm = 0;
int pos = 200;
int counter;

void setup()
{
  servo.attach(7);
  pinMode(9, OUTPUT);
  digitalWrite(4, LOW);
  servo.write(200);
}

void loop()
{
  for (counter = 0; counter < 1; ++counter) {
    digitalWrite(9, HIGH);
    tone(9, 1660, 1000);
    delay(1500);
    digitalWrite(9, LOW);
    delay(250);
  }
  alarm = 0;
  digitalWrite(9, LOW);
  for (pos = 200; pos >= 125; pos--) {
    servo.write(pos);
    delay(1);
  }
  delay(1000);
  for (pos = 125; pos <= 200; pos++) {
    servo.write(pos);
    delay(1);
  }
  delay(5000);
}
