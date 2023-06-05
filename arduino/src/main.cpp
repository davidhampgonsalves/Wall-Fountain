#include <AccelStepper.h>

// Motor pin definitions
#define motorPin1  5     // IN1 on the ULN2003 driver 1
#define motorPin2  4     // IN2 on the ULN2003 driver 1
#define motorPin3  3     // IN3 on the ULN2003 driver 1
#define motorPin4  2     // IN4 on the ULN2003 driver 1

AccelStepper stepper(4, motorPin1, motorPin3, motorPin2, motorPin4);

void setup() {
   stepper.setMaxSpeed(400);
   stepper.setSpeed(400);
}

void loop() {
  stepper.runSpeed();
}