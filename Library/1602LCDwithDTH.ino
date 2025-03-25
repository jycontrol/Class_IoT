#include <LiquidCrystal.h> // LiquidCrystal.h 라이브러리를 포함
#include <DHT11.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2); // LCD가 연결된 핀을 설정 (RS, E, D4, D5, D6, D7)  
  int inputPin = 8;
  DHT11 dht11(inputPin);
void setup() {
  lcd.begin(16,2);
  lcd.print(" Welcome! ");
  delay(5000);
  lcd.clear();
}
void loop() {
  int temperature, humidity;
  int result = dht11.readTemperatureHumidity(temperature, humidity);
    if (result == 0) {
    lcd.setCursor(0,0);
    lcd.print("Temp: ");
    lcd.print(temperature);
    lcd.print(" deg");
    lcd.setCursor(0,1);
    lcd.print("Humi: ");
    lcd.print(humidity);
    lcd.print(" % ");
  }
  else{
    lcd.println();
    lcd.print(DHT11::getErrorString(result));     // Print error message based on the error code.
    lcd.println();
  }
}
