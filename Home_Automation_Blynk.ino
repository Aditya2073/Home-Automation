#define BLYNK_TEMPLATE_ID "TMPL5VaIZBb1"
#define BLYNK_DEVICE_NAME "Home Automation"
#define BLYNK_AUTH_TOKEN "xQRHHd_NQqazr7n7BUdwtesiUT7Zo6hz"

#define BLYNK_PRINT Serial

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = BLYNK_AUTH_TOKEN;

char ssid[] = "iPhone";  // type your wifi name
char pass[] =  "Adir@1352";  // type your wifi password

BLYNK_WRITE(V0)
{
  int value = param.asInt();
  Serial.println(value);
  if(value == 1)
  {
    digitalWrite(D1, LOW);
    Serial.println("LED ON");
  }
  if(value == 0)
  {
     digitalWrite(D1, HIGH);
     Serial.println("LED OFF");
  }
}

BLYNK_WRITE(V1)
{
  int value = param.asInt();
  Serial.println(value);
  if(value == 1)
  {
    digitalWrite(D2, LOW);
    Serial.println("LED ON");
  }
  if(value == 0)
  {
     digitalWrite(D2, HIGH);
     Serial.println("LED OFF");
  }
}

BLYNK_WRITE(V2)
{
  int value = param.asInt();
  Serial.println(value);
  if(value == 1)
  {
    digitalWrite(D5, LOW);
    Serial.println("LED ON");
  }
  if(value == 0)
  {
     digitalWrite(D5, HIGH);
     Serial.println("LED OFF");
  }
}

BLYNK_WRITE(V3)
{
  int value = param.asInt();
  Serial.println(value);
  if(value == 1)
  {
    digitalWrite(D6, LOW);
    Serial.println("LED ON");
  }
  if(value == 0)
  {
     digitalWrite(D6, HIGH);
     Serial.println("LED OFF");
  }
}



void setup()
{
  Serial.begin(115200);
  Blynk.begin(auth, ssid, pass);
  pinMode(D1,OUTPUT);
  pinMode(D2,OUTPUT);
  pinMode(D5,OUTPUT);
  pinMode(D6,OUTPUT);
 
}

void loop()
{
  Blynk.run();
}
