// Stepper Motor Control using ULN2003 Driver
#include <Stepper.h>
const int numStep = 2048;

// 모터연결핀
const intin1 = 8, in2 = 9, in3 = 10, in4 = 11;
String myString;
Stepper mySM(numStep, in1, in3, in2, in4);

void setup() {
Serial.begin(9600);
mySM.setSpeed(10); // 모터회전속도설정
}

void loop() {
if (Serial.available()) {
	myString = Serial.readString(); // 문자열 읽기
int angle = myString.toInt();   // 정수로 변환 
int nStep = numStep / 360.0 * angle; //회전스텝수로변환
Serial.println(angle);
mySM.step(nStep);
}
}
