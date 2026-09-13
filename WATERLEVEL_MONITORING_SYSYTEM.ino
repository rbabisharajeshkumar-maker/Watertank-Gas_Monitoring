#include<Wire.h>
#include<LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);
const int waterLevelPin=A0;
const int trigPin=6;
const int echoPin=7;
const int gasPin=A1;

long duration;int distance;
int waterLevel;
int gasValue;

void setup(){
  lcd.begin();
  lcd.backlight();
  lcd.clear();
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  lcd.setCursor(0,0);
  lcd.print("Water Tank");
  lcd.setCursor(0,1);
  lcd.print("Monitoring...");
  delay(2000);
  lcd.clear();
}
void loop(){
  waterLevel=analogRead(waterLevelPin);
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
  digitalWrite(echoPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
  duration=pulseIn(echoPin, HIGH);
  distance=duration*0.034/2;
  gasValue=analogRead(gasPin);
  lcd.setCursor(0,0);
  lcd.print("Water:");
  lcd.print(waterLevel);
  lcd.print("Dist:");
  lcd.print(distance);
  lcd.print("cm");
  lcd.setCursor(0,1);
  lcd.print("Gas:");
  lcd.print(gasValue);
  lcd.print(" ");
  delay(2000);
}