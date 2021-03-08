void setup() 
{
Serial.begin(9600);
pinMode(2,OUTPUT);
pinMode(4,OUTPUT);
pinMode(7,OUTPUT);
pinMode(8,OUTPUT);
}

void loop() 
{
int xvalue = analogRead(A0);
int yvalue = analogRead(A1);
int zvalue = analogRead(A2);
int pvalue = analogRead(A3);
int qvalue = analogRead(A4);

int a2     = digitalRead(2);
int a4     = digitalRead(4);
int a7     = digitalRead(7);
int a8     = digitalRead(8);

Serial.print("|x:");
Serial.print(xvalue);
Serial.print("|y:");
Serial.print(yvalue);
Serial.print("|p:");
Serial.print(pvalue);
Serial.print("|q:");
Serial.print(qvalue);
Serial.print("\n");

 if(pvalue<290&&yvalue<320)               
{
digitalWrite(2,LOW);
digitalWrite(4,HIGH);
digitalWrite(7,LOW);
digitalWrite(8,HIGH);
} 
else if(pvalue>380&&yvalue>380)              
{
digitalWrite(2,LOW);
digitalWrite(4,HIGH);
digitalWrite(7,HIGH);
digitalWrite(8,HIGH);
} 
 else if(qvalue<290&&xvalue<320)               
{
digitalWrite(2,HIGH);
digitalWrite(4,LOW);
digitalWrite(7,HIGH);
digitalWrite(8,LOW);
} 
 else if(xvalue>385&&qvalue>380)              
{
digitalWrite(2,HIGH);
digitalWrite(4,LOW);
digitalWrite(7,HIGH);
digitalWrite(8,HIGH);
} 
else if(xvalue<320)
{
digitalWrite(2,LOW);
digitalWrite(4,HIGH);
digitalWrite(7,LOW);
digitalWrite(8,LOW);
 }
 else if(yvalue<320)
{
digitalWrite(2,LOW);
digitalWrite(4,LOW);
digitalWrite(7,HIGH);
digitalWrite(8,LOW);
 }
 else if(yvalue>380)
{
digitalWrite(2,LOW);
digitalWrite(4,LOW);
digitalWrite(7,LOW);
digitalWrite(8,HIGH);
 }
 else if(qvalue<290)
{
digitalWrite(2,HIGH);          //front
digitalWrite(4,HIGH);
digitalWrite(7,LOW);
digitalWrite(8,LOW);
}
 else if(qvalue>380)
{
digitalWrite(2,LOW);                //back
digitalWrite(4,HIGH);
digitalWrite(7,HIGH);
digitalWrite(8,LOW);
}
  else if(pvalue>380)
{
digitalWrite(2,LOW);
digitalWrite(4,LOW);               //left
digitalWrite(7,HIGH);
digitalWrite(8,HIGH);
}
 else if(pvalue<290)               //right
{
digitalWrite(2,HIGH);
digitalWrite(4,LOW);
digitalWrite(7,LOW);
digitalWrite(8,HIGH);
}
else if(xvalue>385)
{
digitalWrite(2,HIGH);
digitalWrite(4,LOW);
digitalWrite(7,LOW);
digitalWrite(8,LOW);
 }
else
{
digitalWrite(2,LOW);
digitalWrite(4,LOW);
digitalWrite(7,LOW);
digitalWrite(8,LOW);
}
 Serial.print(a2);
Serial.print(a4);
Serial.print(a7);
Serial.print(a8);
Serial.print("\n");
 
 delay(10);
 }
