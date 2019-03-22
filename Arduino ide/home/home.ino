#include <ESP8266WiFi.h>
#include "Adafruit_Sensor.h"
#include "DHT.h"

const char* ssid     = "Hello";
const char* password = "hello12292006";
const char* host = "clever-house.kl.com.ua";

DHT dht(14, DHT22);


void setup() {
  Serial.begin(115200);
  dht.begin();
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
    client.print( "GET /write/mq2.php?");
    client.print("mq2=");
    client.print(analogRead(A0));
    client.println( " HTTP/1.1");
    client.print( "Host:" );
    client.println(host);
    client.println( "Connection: close" );
    client.println();
    client.println();
    Serial.print("mq2     ");
    Serial.println(analogRead(A0));
  }
  else Serial.println("mq2 print error");

  if (client.connect(host, 80)){
    client.print( "GET /write/dht22t.php?");
    client.print("dh22t=");
    client.print(dht.readTemperature());
    client.println( " HTTP/1.1");
    client.print( "Host:" );
    client.println(host);
    client.println( "Connection: close" );
    client.println();
    client.println();
    Serial.print("dht22t   ");
    Serial.println(dht.readTemperature());
  }
  else Serial.println("am2320t print error");
  
  if (client.connect(host, 80)){
    client.print( "GET /write/dht22h.php?");
    client.print("dht22h=");
    client.print(dht.readHumidity());
    client.println( " HTTP/1.1");
    client.print( "Host:" );
    client.println(host);
    client.println( "Connection: close" );
    client.println();
    client.println();
    Serial.print("dht22h   ");
    Serial.println(dht.readHumidity());
  }
  else Serial.println("dht22h print error");

  if (client.connect(host, 80)){
    client.print( "GET /write/bmp180.php?");
    client.print("bmp180=");
    client.print(755);
    client.println( " HTTP/1.1");
    client.print( "Host:" );
    client.println(host);
    client.println( "Connection: close" );
    client.println();
    client.println();
    Serial.print("bmp180   ");
    Serial.println(755);
  }
  else Serial.println("bmp180 print error");

  delay(3000);  
}
