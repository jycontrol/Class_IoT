#include <LiquidCrystal.h> // LiquidCrystal.h 라이브러리를 포함

LiquidCrystal lcd(12, 11, 5, 4, 3, 2); // LCD가 연결된 핀을 설정 (RS, E, D4, D5, D6, D7)  

void setup() {
  lcd.begin(16, 2); // LCD의 크기를 설정
  lcd.print(“hello, world!”); // LCD에 문자 “hello, World!”를 출력
}

void loop() {
  lcd.noDisplay(); // 화면을 끔
  delay(500); // 0.5초 대기
  lcd.display(); // 화면을 켭니다.
  delay(500); // 0.5초 대기
}
