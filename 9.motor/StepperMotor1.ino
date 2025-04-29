// Stepper Motor Control using ULN2003 Driver
// library : Stepper.h
#include <Stepper.h>
const int numStep = 2048;
const int rpm1 = 5, rpm2 = 10;
// 모터연결핀
const int in1 = 8, in2 = 9, in3 = 10, in4 = 11;
const int delayTime = 1000;  
Stepper mySM(numStep, in1, in3, in2, in4);

void setup() {
}

void loop() {
// 5 rpm 속도로모터를정회전시킨다.
mySM.setSpeed(rpm1);
mySM.step(numStep);
delay(delayTime);
// 10 rpm 속도로모터를정회전시킨다.
mySM.setSpeed(rpm2);
mySM.step(-numStep);
delay(delayTime);
}
