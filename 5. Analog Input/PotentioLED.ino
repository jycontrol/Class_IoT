int readPrevious = 0;
int readCurrent = 0;

int LED_pin = 5; // LED 연결 핀


void setup() {
    pinMode(LED_pin, OUTPUT); // 출력 모드 설정 
  	Serial.begin(9600); // 직렬 포트 초기화
}
void loop() {
   String echoStr;
   readCurrent = analogRead(A0); // ADC를 통한 아날로그 값 입력
   if(readCurrent != readPrevious){ // 이전 값과 달라진 경우만 출력
  	 readPrevious = readCurrent; // 이전값 갱신
 	  echoStr = "Current analog input : " + String(readCurrent);
 	  Serial.println(echoStr); // 시리얼 모니터로 현재 볼륨값 출력
   }
	analogWrite(LED_pin, readCurrent/4); // 0(꺼짐)에서 255(켜짐)로 서서히 변화

}
