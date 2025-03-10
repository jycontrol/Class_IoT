// 시리얼 통신을 통해 받은 데이터를 출력
int incomingByte = 0; 			// for incoming serial data

void setup() {
  Serial.begin(9600); 			// opens serial port, sets data rate to 9600 bps
}

void loop() {
  if (Serial.available() > 0) {		 // send data only when you receive data:
    incomingByte = Serial.read();		 // read the incoming byte:
    Serial.print("I received: ");		 // say what you got:
    Serial.println(incomingByte, DEC);	 // BIN, OCT, DEC, HEX
  }
}

}
