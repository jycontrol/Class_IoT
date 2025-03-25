#include <DHT11.h>
  int inputPin = 8;
  DHT11 dht11(inputPin);
void setup() {
  Serial.begin(9600);
}
void loop() {
  int temperature, humidity;
  int result = dht11.readTemperatureHumidity(temperature, humidity);
    if (result == 0) {
    Serial.print("Temp: ");
    Serial.print(temperature);
    Serial.print(" deg");
    Serial.println();    Serial.print("Humi: ");
    Serial.print(humidity);
    Serial.print(" % ");
    Serial.println();
  }
  else{
    Serial.println();
    Serial.print(DHT11::getErrorString(result));     
    Serial.println();
  }
  delay(1000);
}
