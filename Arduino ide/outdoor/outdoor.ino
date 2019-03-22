#include <ESP8266WiFi.h>
#include "Adafruit_Sensor.h"
#include "Adafruit_AM2320.h"

const char* ssid     = "Hello";
const char* password = "hello12292006";
const char* host = "clever-house.kl.com.ua";

Adafruit_AM2320 am2320 = Adafruit_AM2320();

void setup() {
  Serial.begin(115200);
  am2320.begin();
  WiFi.mode(WIFI_STA); 
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED)
  {
    delay(500);
    Serial.print("*");
  }
  Serial.println("CONNECTED");
}


void loop() {
  WiFiClient client;
  
  if (client.connect(host, 80)){
    client.print( "GET /write/light.php?");
    client.print("light=");
    client.print(analogRead(A0));
    client.println( " HTTP/1.1");
    client.print( "Host:" );
    client.println(host);
    client.println( "Connection: close" );
    client.println();
    client.println();
    Serial.print("light     ");
    Serial.println(analogRead(A0));
  }
  else Serial.println("light print error");

    if (client.connect(host, 80)){
    client.print( "GET /write/am2320t.php?");
    client.print("am2320t=");
    client.print(am2320.readTemperature());
    client.println( " HTTP/1.1");
    client.print( "Host:" );
    client.println(host);
    client.println( "Connection: close" );
    client.println();
    client.println();
    Serial.print("am2320t   ");
    Serial.println(am2320.readTemperature());
  }
  else Serial.println("am2320t print error");

    if (client.connect(host, 80)){
    client.print( "GET /write/am2320h.php?");
    client.print("am2320h=");
    client.print(am2320.readHumidity());
    client.println( " HTTP/1.1");
    client.print( "Host:" );
    client.println(host);
    client.println( "Connection: close" );
    client.println();
    client.println();
    Serial.print("am2320h   ");
    Serial.println(am2320.readHumidity());
  }
  else Serial.println("am2320h print error");

  delay(3000);

  
}
