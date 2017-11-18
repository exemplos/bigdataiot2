#include <ESP8266WiFi.h>
#include <PubSubClient.h>
#include <ArduinoJson.h> //5.7.0

const char* ssid     = "IoTcel";
const char* password = "12348765";


void setup() {
  Serial.begin(115200);
  delay(10);
  pinMode(2, OUTPUT);

  Serial.println();
  Serial.println();
  Serial.print("Connecting to ");
  Serial.println(ssid);
  
  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);
  
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("\nConectado!\n\n");
}

void loop() {
  // put your main code here, to run repeatedly:

}
