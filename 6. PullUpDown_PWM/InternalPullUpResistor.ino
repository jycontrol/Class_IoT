void setup() { 		
  Serial.begin(9600);  		// 시리얼연결
  pinMode(7, INPUT_PULLUP);  	// 내부 풀업저항 설정
  pinMode(8, OUTPUT);
}

void loop() {  
  int sensorVal = digitalRead(7);  	//푸쉬버튼으로 들어오는 입력을 sensorVal에 할당
  Serial.println(sensorVal);  
  if (sensorVal == HIGH) {    
    digitalWrite(8, LOW);  
  } else {    
    digitalWrite(8, HIGH);
  }
}
