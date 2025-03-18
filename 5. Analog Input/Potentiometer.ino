int readPrevious = 0;
int readCurrent = 0;

void setup() {
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
}
