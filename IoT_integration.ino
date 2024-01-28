#define BLYNK_PRINT Serial
#define BLYNK_TEMPLATE_ID "TMPL3LFxSfLR3"
#define BLYNK_TEMPLATE_NAME "Quickstart Template"
const int l1 = D4;
const int l2 = D5;
const int l3 = D6;
const int l4 = D7;


#include <ESP8266WiFi.h>

#include <BlynkSimpleEsp8266.h>

char auth[] = "8IPcf6x_WqgywbLeCgGLR7r8AFYUAWzn";
char ssid[] = "abhay";
char pass[] = "aaaaaaaaa";

void setup()
{  
  pinMode(l1, OUTPUT); 
  pinMode(l2, OUTPUT); 
  
  pinMode(l3, OUTPUT); 
  pinMode(l4, OUTPUT);
  Serial.begin(115200);
 
  Blynk.begin(auth, ssid, pass);

}

void loop()
{
  Blynk.run();

  

  delay(200);

}

BLYNK_WRITE(V0)
{
  int pinValue = param.asInt();
  digitalWrite(l1, pinValue);
}

BLYNK_WRITE(V1)
{
  int pinValue = param.asInt();
  digitalWrite(l2, pinValue);
}

BLYNK_WRITE(V3)
{
  int pinValue = param.asInt();
  digitalWrite(l3, pinValue);
}

BLYNK_WRITE(V4)
{
  int pinValue = param.asInt();
  digitalWrite(l4, pinValue);
}

BLYNK_WRITE(V2)
{
  int pinValue = param.asInt();
  Serial.println(pinValue);
  analogWrite(D3, pinValue);
}
