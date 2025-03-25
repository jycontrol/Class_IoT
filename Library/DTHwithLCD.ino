#include <LiquidCrystal.h>
#include <DHT11.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2); 
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
    lcd.print(DHT11::getErrorString(result));     
    lcd.println();
  }
}
