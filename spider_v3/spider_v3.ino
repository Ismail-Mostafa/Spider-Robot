#include <Servo.h>
char x;
char y;
Servo a1_s1;
Servo a1_s2;
Servo a1_s3;
Servo a2_s1;
Servo a2_s2;
Servo a2_s3;
Servo a3_s1;
Servo a3_s2;
Servo a3_s3;
Servo a4_s1;
Servo a4_s2;
Servo a4_s3;
Servo a5_s1;
Servo a5_s2;
Servo a5_s3;
Servo a6_s1;
Servo a6_s2;
Servo a6_s3;
int sen_b=8;
int sen_f=7;
int sen_r=5;
int sen_l=6;
int i=0;


void setup()
{
 a1_s1.attach(22); //grey from left 
 a1_s2.attach(24); //pruple 
 a1_s3.attach(23); //blue 
 a2_s1.attach(25); //green 
 a2_s2.attach(27); //yellow 
 a2_s3.attach(29); //orange 
 a3_s1.attach(31); //red 
 a3_s2.attach(33); //brown
 a3_s3.attach(35); //black 
 a6_s1.attach(37); //white 
 a6_s2.attach(39); //grey 
 a6_s3.attach(41); //pruple 
 a5_s1.attach(43); //blue
 a5_s2.attach(45); //green
 a5_s3.attach(47); //yellow
 a4_s1.attach(49); //orange
 a4_s2.attach(51); //red 
 a4_s3.attach(53); //brown
 pinMode(sen_l,INPUT);
 pinMode(sen_r,INPUT);
 pinMode(sen_f,INPUT);
 pinMode(sen_b,INPUT);
 pinMode(2,INPUT);
 pinMode(3,INPUT);
Serial.begin(9600); 
Serial3.begin(9600);
 stand_up();



}

void loop()
{
  if(digitalRead(sen_l)==LOW)
  {
   Serial.println("left"); 
  }
  if(digitalRead(sen_f)==LOW)
  {
   Serial.println("FORWARD"); 
  }
  if(digitalRead(sen_r)==LOW)
  {
   Serial.println("RIGHT"); 
  }
  if(digitalRead(sen_b)==LOW)
  {
   Serial.println("backward"); 
  }
   if(digitalRead(2)==HIGH||digitalRead(3)==HIGH)
  {
   Serial.println("metal");
  Serial3.println("metal"); 
  } 
  if(Serial3.available())
  {
    x=Serial3.read();
 }
 if(Serial.available())
  {
    x=Serial.read();
 }
 
     if(x=='w')
     {
  if(digitalRead(sen_f)==HIGH)
  forward();
  else if(digitalRead(sen_f)==LOW)
  {
   if(digitalRead(sen_r)==LOW&&digitalRead(sen_l)==HIGH)
      tleft(); 
     else if(digitalRead(sen_l)==LOW&&digitalRead(sen_r)==HIGH)
      tright(); 
    else
    tleft();  
  }

  
     }
  if(x=='s')
  {
   if(digitalRead(sen_b)==HIGH) 
   backward();
   else{
   for(i=0;i<10;i++)
   {
    tright();  
   }
   x='q';}
  }
if (x=='a')
  tleft();
if (x=='d')
  tright();
  if ( x=='q')
  stand_up();
  
  
  
}




void stand_up()
{
 a1_s1.write(90);
 a1_s2.write(90);
 a1_s3.write(90);
 a2_s1.write(90);
 a2_s2.write(90);
 a2_s3.write(90);
 a3_s1.write(90);
 a3_s2.write(90);
 a3_s3.write(90);
 a4_s1.write(90);
 a4_s2.write(90);
 a4_s3.write(90);
 a5_s1.write(90);
 a5_s2.write(90);
 a5_s3.write(90);
 a6_s1.write(90);
 a6_s2.write(90);
 a6_s3.write(90);
  
}

void forward()
{

 a1_s2.write(70);
 a1_s3.write(110);
 delay(150);
 a2_s1.write(115);
 a3_s1.write(115);
 a4_s1.write(65);
 a5_s1.write(65);
 a6_s1.write(65);
 delay(150);
 
 
 
 a1_s2.write(90);
 a1_s3.write(90);
 delay(150);
 
 
 a4_s2.write(110);
 a4_s3.write(70);
 delay(150);
 a4_s1.write(90);
 delay(150);
a4_s2.write(90);
a4_s3.write(90); 
delay(150); 
 
 
 a2_s2.write(110);
 a2_s3.write(70);
 delay(150);
 a2_s1.write(90);
 delay(150);
a2_s2.write(90);
a2_s3.write(90); 
delay(150);
 


 a5_s2.write(70);
 a5_s3.write(110);
 delay(150);
 a5_s1.write(90);
 delay(150);
a5_s2.write(90);
a5_s3.write(90); 
delay(150);



 a6_s2.write(70);
 a6_s3.write(110);
 delay(150);
 a6_s1.write(90);
 delay(150);
a6_s2.write(90);
a6_s3.write(90); 
delay(150);
 
   a3_s2.write(110);
 a3_s3.write(60);
 delay(150);
 a3_s1.write(90);
 delay(150);
a3_s2.write(90);
a3_s3.write(90); 
delay(150);
 
 ////////////////////////////////////////////////////////////////////////////////
 ///////////////////////////////////////////////////////////////////////////////////
  a4_s2.write(110);
 a4_s3.write(70);
 delay(150);
 a2_s1.write(115);
 a3_s1.write(115);
 a1_s1.write(115);
 a5_s1.write(65);
 a6_s1.write(65);
 delay(150);
 
 
 
 a4_s2.write(90);
 a4_s3.write(90);
 delay(150);
 
 
 a1_s2.write(70);
 a1_s3.write(110);
 delay(150);
 a1_s1.write(90);
 delay(150);
a1_s2.write(90);
a1_s3.write(90); 
delay(150); 
 
 
 a2_s2.write(110);
 a2_s3.write(70);
 delay(150);
 a2_s1.write(90);
 delay(150);
a2_s2.write(90);
a2_s3.write(90); 
delay(150);
 


 a5_s2.write(70);
 a5_s3.write(110);
 delay(150);
 a5_s1.write(90);
 delay(150);
a5_s2.write(90);
a5_s3.write(90); 
delay(150);



 a6_s2.write(70);
 a6_s3.write(110);
 delay(150);
 a6_s1.write(90);
 delay(150);
a6_s2.write(90);
a6_s3.write(90); 
delay(150);
 
   a3_s2.write(110);
 a3_s3.write(60);
 delay(150);
 a3_s1.write(90);
 delay(150);
a3_s2.write(90);
a3_s3.write(90); 
delay(150);
 
}



void backward ()
{
 a6_s2.write(70);
 a6_s3.write(110);
 delay(150);
 a2_s1.write(65);
 a3_s1.write(65);
 a4_s1.write(115);
 a5_s1.write(115);
 a1_s1.write(65);
 delay(150);
 
 
 
 a6_s2.write(90);
 a6_s3.write(90);
 delay(150);
 
 
    a3_s2.write(110);
 a3_s3.write(60);
 delay(150);
 a3_s1.write(90);
 delay(150);
a3_s2.write(90);
a3_s3.write(90); 
delay(150);
 
 a5_s2.write(70);
 a5_s3.write(110);
 delay(150);
 a5_s1.write(90);
 delay(150);
a5_s2.write(90);
a5_s3.write(90); 
delay(150);


 
 
 a2_s2.write(110);
 a2_s3.write(70);
 delay(150);
 a2_s1.write(90);
 delay(150);
a2_s2.write(90);
a2_s3.write(90); 
delay(150);
 
 a4_s2.write(110);
 a4_s3.write(70);
 delay(150);
 a4_s1.write(90);
 delay(150);
a4_s2.write(90);
a4_s3.write(90); 
delay(150); 

 


 a1_s2.write(70);
 a1_s3.write(110);
 delay(150);
 a1_s1.write(90);
 delay(150);
a1_s2.write(90);
a1_s3.write(90); 
delay(150);
 

 
 ////////////////////////////////////////////////////////////////////////////////
 ///////////////////////////////////////////////////////////////////////////////////
  a3_s2.write(110);
 a3_s3.write(60);
 delay(150);
 a2_s1.write(65);
 a4_s1.write(115);
 a1_s1.write(65);
 a5_s1.write(115);
 a6_s1.write(115);
 delay(150);
 
 
 
 a3_s2.write(90);
 a3_s3.write(90);
 delay(150);
 
  a6_s2.write(70);
 a6_s3.write(110);
 delay(150);
 a6_s1.write(90);
 delay(150);
a6_s2.write(90);
a6_s3.write(90); 
delay(150);

 a2_s2.write(110);
 a2_s3.write(70);
 delay(150);
 a2_s1.write(90);
 delay(150);
a2_s2.write(90);
a2_s3.write(90); 
delay(150); 
 
 a5_s2.write(70);
 a5_s3.write(110);
 delay(150);
 a5_s1.write(90);
 delay(150);
a5_s2.write(90);
a5_s3.write(90); 
delay(150);

 
 a1_s2.write(70);
 a1_s3.write(110);
 delay(150);
 a1_s1.write(90);
 delay(150);
a1_s2.write(90);
a1_s3.write(90); 
delay(150); 
 
 

 

   a4_s2.write(110);
 a4_s3.write(70);
 delay(150);
 a4_s1.write(90);
 delay(150);
a4_s2.write(90);
a4_s3.write(90); 
delay(150);
 
}

void tleft()
{
  
a4_s2.write(110);
a4_s3.write(70);
delay(150);
a4_s1.write(60);
delay(150);
a4_s2.write(90);
a4_s3.write(90);
delay(150);


a5_s2.write(70);
a5_s3.write(110);
delay(150);
a5_s1.write(60);
delay(150);
a5_s2.write(90);
a5_s3.write(90);
delay(150);


a6_s2.write(70);
a6_s3.write(110);
delay(150);
a6_s1.write(60);
delay(150);
a6_s2.write(90);
a6_s3.write(90);
delay(150);

a3_s2.write(110);
a3_s3.write(60);
delay(150);
a3_s1.write(60);
delay(150);
a3_s2.write(90);
a3_s3.write(90);
delay(150);

a2_s2.write(110);
a2_s3.write(70);
delay(150);
a2_s1.write(60);
delay(150);
a2_s2.write(90);
a2_s3.write(90);
delay(150);

a1_s2.write(70);
a1_s3.write(110);
delay(150);
a1_s1.write(60);
delay(150);
a1_s2.write(90);
a1_s3.write(90);
delay(150);

a1_s1.write(90);
a2_s1.write(90);
a3_s1.write(90);
a4_s1.write(90);
a5_s1.write(90);
a6_s1.write(90);
}

void tright()
{
  
a4_s2.write(110);
a4_s3.write(70);
delay(150);
a4_s1.write(120);
delay(150);
a4_s2.write(90);
a4_s3.write(90);
delay(150);


a5_s2.write(70);
a5_s3.write(110);
delay(150);
a5_s1.write(120);
delay(150);
a5_s2.write(90);
a5_s3.write(90);
delay(150);


a6_s2.write(70);
a6_s3.write(110);
delay(150);
a6_s1.write(120);
delay(150);
a6_s2.write(90);
a6_s3.write(90);
delay(150);

a3_s2.write(110);
a3_s3.write(60);
delay(150);
a3_s1.write(120);
delay(150);
a3_s2.write(90);
a3_s3.write(90);
delay(150);

a2_s2.write(110);
a2_s3.write(70);
delay(150);
a2_s1.write(120);
delay(150);
a2_s2.write(90);
a2_s3.write(90);
delay(150);

a1_s2.write(70);
a1_s3.write(110);
delay(150);
a1_s1.write(120);
delay(150);
a1_s2.write(90);
a1_s3.write(90);
delay(150);

a1_s1.write(90);
a2_s1.write(90);
a3_s1.write(90);
a4_s1.write(90);
a5_s1.write(90);
a6_s1.write(90);
}
  
  
void stand_up2()
{
 a1_s1.write(130);
 a1_s2.write(130);
 a1_s3.write(130);
 a2_s1.write(130);
 a2_s2.write(130);
 a2_s3.write(130);
 a3_s1.write(130);
 a3_s2.write(130);
 a3_s3.write(130);
 a4_s1.write(130);
 a4_s2.write(130);
 a4_s3.write(130);
 a5_s1.write(130);
 a5_s2.write(130);
 a5_s3.write(130);
 a6_s1.write(130);
 a6_s2.write(130);
 a6_s3.write(130);
  
}


