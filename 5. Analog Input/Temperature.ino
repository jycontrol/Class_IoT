int readValue = 0; // 변수 readValue를 선언하고 0을 대입 
float voltage;
float temperature;

void setup() { 
  Serial.begin(9600); // 시리얼 통신을 시작 (통신속도는 9600) 
} 

void loop() { 
  readValue = analogRead(A0);  // A0 입력신호를 readValue에 저장 
  voltage = readValue*5.0/1024.0; //입력전압을 유추하는 과정
  temperature = voltage*100;   //센서 특성반영 0V~1V=>섭씨 0도~100도
  Serial.print("temperature : ");
  Serial.println(temperature); // 시리얼 모니터에 온도 출력 
  delay(500); // 0.5초 대기 
}
