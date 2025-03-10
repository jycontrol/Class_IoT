// Send data to PC by serial communication
int x = 1;
float y = 2;

void setup() {
  Serial.begin(9600);    		// 시리얼 통신의 속도를 9600 으로 설정한다
}
void loop() {
  Serial.println("Hello Arduino.");     // 문장과 x, y 값을 시리얼 모니터에 나타낸다
  Serial.print("x = ");
  Serial.print(x);
  Serial.print(", y = ");
  Serial.println(y);
  delay(1000);
}
