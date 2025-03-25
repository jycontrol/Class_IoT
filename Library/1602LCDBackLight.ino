#include <LiquidCrystal.h> // LiquidCrystal.h 라이브러리를 포함
LiquidCrystal lcd(12, 11, 5, 4, 3, 2); // LCD가 연결된 핀을 설정 (RS, E, D4, D5, D6, D7)  

void setup() {
  lcd.begin(16,2); 
  lcd.setCursor(0,0);			  // 첫번째 줄, 첫번째 칸에서 시작
  lcd.write(“Dong-eui Univ."); 
  lcd.setCursor(0,1); 		  // 두번째 줄, 첫번째 칸에서 시작
  lcd.write(“Jaeyong Lee"); 
}
void loop() {
}
