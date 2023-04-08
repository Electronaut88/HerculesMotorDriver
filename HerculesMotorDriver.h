#ifndef HERCULESMOTORDRIVER_H
#define HERCULESMOTORDRIVER_H
#include "Arduino.h"

class Hdriver {
  public:
    Hdriver(int in1, int in2, int pwm);

    int _in1;
    int _in2;
    int _pwm;

    char data;

    void Control(int PWM);
};

#endif
