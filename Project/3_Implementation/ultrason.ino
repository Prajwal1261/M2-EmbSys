/**
 * @file ultrason.ino
 * @author Prajwal Allitti (allittiprajwal230@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-03-08
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <LiquidCrystal.h>
#define trigPin 3
#define echoPin 2
#define RS 9
#define EN 8
#define D4 4
#define D5 5
#define D6 6
#define D7 7
#define buzzpin 12
 LiquidCrystal lcd (RS, EN, D4, D5, D6, D7);

void setup()
{

 lcd.begin(16, 2);

 pinMode(trigPin, OUTPUT);
 pinMode(echoPin, INPUT);
 pinMode (buzzpin, OUTPUT);
}

long duration, distance;
void loop()
{
 
 lcd.clear();
 lcd.setCursor(0, 0);
 lcd.print("Distance :");
 lcd.print(distance);
 lcd.println("cm");
 delay(1000);


 digitalWrite(trigPin, LOW);
 delayMicroseconds(2);
 digitalWrite (trigPin, HIGH);
 delayMicroseconds(10);
 digitalWrite (trigPin, LOW);
 duration = pulseIn(echoPin, HIGH);
 distance = (duration/2) /29.1;
   if (distance < 50) {
    digitalWrite(buzzpin, HIGH);
  } else {
    digitalWrite(buzzpin, LOW);
  }
 

}