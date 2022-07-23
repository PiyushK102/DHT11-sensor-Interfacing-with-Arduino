#include<Adafruit_Sensor.h>
#include "DHT.h"
#define DHTPIN 2
#define DHTTYPE DHT11
DHT dht(DHTPIN,DHTTYPE);
void setup() {
  Serial.begin(9600);
  Serial.println("DHT 11 TEST");
  dht.begin();
}

void loop() {
  delay(2000);
  float h=dht.readHumidity();
  float t=dht.readTemperature();
  Serial.print("Humidity :\t");
  Serial.print(h);Serial.println("%");

  delay(500);
  Serial.print("Temperature :\t");
  Serial.print(t);
  Serial.println(248);
}
