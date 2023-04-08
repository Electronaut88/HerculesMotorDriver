#include "HerculesMotorDriver.h"

Hdriver::Hdriver(int in1, int in2, int pwm) {
  _in1 = in1;
  _in2 = in2;
  _pwm = pwm;

  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(pwm, OUTPUT);
}

void Hdriver::Control(int PWM) {
  if (PWM > 0) {
    digitalWrite(_in1, HIGH);
    digitalWrite(_in2, LOW);
    analogWrite(_pwm, PWM);
  }
  if (PWM < 0) {
    digitalWrite(_in1, LOW);
    digitalWrite(_in2, HIGH);
    analogWrite(_pwm, -PWM);
  }
  if (PWM == 0) {
    digitalWrite(_in1, HIGH);
    digitalWrite(_in2, HIGH);
  }
}
