#include <Arduino.h>
#define sensor A0
int x, temp;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
 float y=analogRead(sensor);
 x=(y/1024)*3300;
  temp=x;
  Serial. print("the temperature is: ");
  Serial. println(temp);

}