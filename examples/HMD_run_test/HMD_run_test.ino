/*
  This code is for Hercules Motor Driver.

  Hercules             Arduino
   GND      -------     GND
   IN1      -------      2
   IN2      -------      4
   PWM      -------      3

  Created by - Sushant Khamaitkar
  Gmail - skhamaitkar98@gmail.com

*/

#include <HerculesMotorDriver.h>

Hdriver motor(2, 4, 3);  // (IN1, IN2, PWM)
int Speed = 100;         // ( 0 to 255 )

void setup() {
  // put your setup code here, to run once:
}

void loop() {

  //clockwise rotation of motor (0 < Speed <= 255)
  motor.Control(Speed);
  delay(2000);

  //Stop the motor (Speed = 0)
  motor.Control(0);
  delay(2000);

  //anti-clockwise rotation of motor (-255 <= Speed <0)
  motor.Control(-Speed);
  delay(2000);


}
