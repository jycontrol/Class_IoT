// Send sine wave data to PC by serial communication
const int nx = 256;
float w0, x;

void setup() {
  Serial.begin(9600);			 // 시리얼 통신의 속도를 9600 으로 설정한다
  w0 = 4.0 * PI / nx;
}
void loop() {
  for (int n = 0; n < nx; n++) {		 // 사인파를 만들고 시리얼 모니터에 나타낸다
  x = sin(w0 * n);
  Serial.println(x);
  }
}
