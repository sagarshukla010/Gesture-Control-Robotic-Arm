#include <Servo.h>

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position
void setup() 
{
Serial.begin(9600);
pinMode(22,INPUT);
pinMode(23,INPUT);
pinMode(24,INPUT);
pinMode(25,INPUT);
pinMode(36,OUTPUT);
pinMode(37,OUTPUT);
pinMode(38,OUTPUT);
pinMode(39,OUTPUT);
pinMode(40,OUTPUT);
myservo.attach(9); // attaches the servo on pin 9 to the servo object
}
void loop() 
{
int a2=digitalRead(22);
int a3=digitalRead(23);
int a4=digitalRead(24);
int a5=digitalRead(25);
Serial.print(a2);
Serial.print(' ');
Serial.print(a3);
Serial.print(' ');
Serial.print(a4);
Serial.print(' ');
Serial.print(a5);
Serial.print("\n");

if(a2==LOW&&a3==LOW&&a4==HIGH&&a5==LOW)
{
  myservo.write(180);            
   delay(15);                      
 }
 else if(a2==HIGH&&a3==LOW&&a4==LOW&&a5==LOW)
{
    myservo.write(pos);         
    delay(15);                       
 }
 else if(a2==HIGH&&a3==HIGH&&a4==LOW&&a5==LOW)
{
digitalWrite(36,HIGH);
digitalWrite(37,LOW);
digitalWrite(38,LOW);
digitalWrite(39,LOW);
digitalWrite(40,LOW);
digitalWrite(41,LOW);
digitalWrite(42,LOW);
digitalWrite(43,LOW);
digitalWrite(44,LOW);
digitalWrite(45,LOW);
digitalWrite(46,LOW);
digitalWrite(47,LOW);
detach();
}

else if(a2==HIGH&&a3==LOW&&a4==HIGH&&a5==LOW)
{
digitalWrite(36,LOW);
digitalWrite(37,HIGH);
digitalWrite(38,LOW);
digitalWrite(39,LOW);
digitalWrite(40,LOW);
digitalWrite(41,LOW);
digitalWrite(42,LOW);
digitalWrite(43,LOW);
digitalWrite(44,LOW);
digitalWrite(45,LOW);
digitalWrite(46,LOW);
digitalWrite(47,LOW);
detach();
}
else if(a2==LOW&&a3==HIGH&&a4==LOW&&a5==HIGH)
{
digitalWrite(36,LOW);
digitalWrite(37,LOW);
digitalWrite(38,HIGH);
digitalWrite(39,LOW);
digitalWrite(40,LOW);
digitalWrite(41,LOW);
digitalWrite(42,LOW);
digitalWrite(43,LOW);
digitalWrite(44,LOW);
digitalWrite(45,LOW);
digitalWrite(46,LOW);
digitalWrite(47,LOW);
detach();
}
else if(a2==LOW&&a3==LOW&&a4==HIGH&&a5==HIGH)
{
digitalWrite(36,LOW);
digitalWrite(37,LOW);
digitalWrite(38,LOW);
digitalWrite(39,HIGH);
digitalWrite(40,LOW);
digitalWrite(41,LOW);
digitalWrite(42,LOW);
digitalWrite(43,LOW);
digitalWrite(44,LOW);
digitalWrite(45,LOW);
digitalWrite(46,LOW);
digitalWrite(47,LOW);
detach();
}
 else if(a2==LOW&&a3==HIGH&&a4==LOW&&a5==LOW)
{
digitalWrite(40,LOW);
digitalWrite(41,LOW);
digitalWrite(42,HIGH);
digitalWrite(43,LOW);
digitalWrite(44,LOW);
digitalWrite(45,LOW);
digitalWrite(46,LOW);
digitalWrite(47,LOW);
digitalWrite(38,LOW);
digitalWrite(39,LOW);                  
digitalWrite(36,LOW);
digitalWrite(37,LOW); 
detach();
}
 else if(a2==LOW&&a3==LOW&&a4==LOW&&a5==HIGH)
{
digitalWrite(40,LOW);
digitalWrite(41,LOW);
digitalWrite(42,LOW);
digitalWrite(43,HIGH);
digitalWrite(44,LOW);
digitalWrite(45,LOW);
digitalWrite(46,LOW);
digitalWrite(47,LOW);
digitalWrite(38,LOW);
digitalWrite(39,LOW);
digitalWrite(36,LOW);
digitalWrite(37,LOW);
detach();
 }
 else if(a2==LOW&&a3==HIGH&&a4==HIGH&&a5==LOW)
{
digitalWrite(40,LOW);
digitalWrite(41,LOW);
digitalWrite(42,LOW);
digitalWrite(43,LOW);                          //right
digitalWrite(44,LOW);
digitalWrite(45,HIGH);
digitalWrite(46,LOW);
digitalWrite(47,HIGH);
digitalWrite(38,LOW);
digitalWrite(39,LOW);
digitalWrite(36,LOW);
digitalWrite(37,LOW);
detach();
 }

 else if(a2==HIGH&&a3==HIGH&&a4==HIGH&&a5==LOW)
{
digitalWrite(40,LOW);
digitalWrite(41,LOW);
digitalWrite(42,LOW);
digitalWrite(43,LOW);
digitalWrite(44,HIGH);                           //left
digitalWrite(45,LOW);
digitalWrite(46,HIGH);
digitalWrite(47,LOW);
digitalWrite(38,LOW);
digitalWrite(39,LOW);
digitalWrite(36,LOW);
digitalWrite(37,LOW);
detach();
 }

 else if(a2==HIGH&&a3==LOW&&a4==HIGH&&a5==HIGH)
{
digitalWrite(40,LOW);
digitalWrite(41,LOW);
digitalWrite(42,LOW);
digitalWrite(43,LOW);
digitalWrite(44,LOW);                                  //back
digitalWrite(45,HIGH);
digitalWrite(46,HIGH);
digitalWrite(47,LOW);
digitalWrite(38,LOW);
digitalWrite(39,LOW);
digitalWrite(36,LOW);
digitalWrite(37,LOW);
detach();
 }

 else if(a2==HIGH&&a3==LOW&&a4==LOW&&a5==HIGH)
{
digitalWrite(40,LOW);
digitalWrite(41,LOW);
digitalWrite(42,LOW);
digitalWrite(43,LOW);
digitalWrite(44,HIGH);                        //front
digitalWrite(45,LOW);
digitalWrite(46,LOW);
digitalWrite(47,HIGH);
digitalWrite(38,LOW);
digitalWrite(39,LOW);
digitalWrite(36,LOW);
digitalWrite(37,LOW);
detach();
 }
  else
{
digitalWrite(36,LOW);
digitalWrite(37,LOW);
digitalWrite(38,LOW);
digitalWrite(39,LOW);
digitalWrite(40,LOW);
digitalWrite(41,LOW);
digitalWrite(42,LOW);
digitalWrite(43,LOW);
digitalWrite(44,LOW);
digitalWrite(45,LOW);
digitalWrite(46,LOW);
digitalWrite(47,LOW);
attach();
}
 delay(10);
 }
 void detach()
 {
 myservo.detach();
 }
  void attach()
 {
 myservo.attach(9);
 }

