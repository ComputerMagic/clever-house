#include <ESP8266WiFi.h>
bool b = 0;
bool b1 = 0;
bool b2 = 0;
bool b3 = 0;

const char* ssid     = "Hello";
const char* password = "hello12292006";
const char* host = "clever-house.kl.com.ua";


void setup() {
  Serial.begin(115200);
  pinMode(15, INPUT);
  pinMode(12, INPUT);
  pinMode(13, INPUT);
  pinMode(14, INPUT);
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
  if (b != digitalRead(15)){
    b = !b;
    Serial.print(b);
    Serial.println("B");
    delay(50);
   if (client.connect(host, 80)){
    client.print( "GET /write/b.php?");
    client.print("b=");
    if(b) client.print("on");
    else client.print("off");
    client.println( " HTTP/1.1");
    client.print( "Host:" );
    client.println(host);
    client.println( "Connection: close" );
    client.println();
    client.println();
    delay(50);
   }
   else Serial.println("b print error");
  }
  if (b1 != digitalRead(12)){
    b1 = !b1;
    Serial.print(b1);
    Serial.println("B1");
    delay(50);
   if (client.connect(host, 80)){
    client.print( "GET /write/b1.php?");
    client.print("b1=");
    if(b1) client.print("on");
    else client.print("off");
    client.println( " HTTP/1.1");
    client.print( "Host:" );
    client.println(host);
    client.println( "Connection: close" );
    client.println();
    client.println();
    delay(50);
   }
   else Serial.println("b1 print error");
  }
  if (b2 != digitalRead(13)){
    b2 = !b2;
    Serial.print(b2);
    Serial.println("B2");
    delay(50);
   if (client.connect(host, 80)){
    client.print( "GET /write/b2.php?");
    client.print("b2=");
    if(b2) client.print("on");
    else client.print("off");
    client.println( " HTTP/1.1");
    client.print( "Host:" );
    client.println(host);
    client.println( "Connection: close" );
    client.println();
    client.println();
    delay(50);
   }
   else Serial.println("b2 print error");
  }
  if (b3 != digitalRead(14)){
    b3 = !b3;
    Serial.print(b3);
    Serial.println("B3");
    delay(50);
   if (client.connect(host, 80)){
    client.print( "GET /write/b3.php?");
    client.print("b3=");
    if(b3) client.print("on");
    else client.print("off");
    client.println( " HTTP/1.1");
    client.print( "Host:" );
    client.println(host);
    client.println( "Connection: close" );
    client.println();
    client.println();
    delay(50);
   }
   else Serial.println("b3 print error");
  }


}
