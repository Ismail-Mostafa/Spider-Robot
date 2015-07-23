#include <Servo.h>
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
 stand_up();
}

void loop()
{
  backward();
  
 //forward();
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

 //a1_s2.write(70);
 //a1_s3.write(110);
 delay(100);
 a2_s1.write(110);
 a3_s1.write(110);
 a4_s1.write(70);
 a5_s1.write(70);
 a6_s1.write(70);
 delay(100);
 
 
 
 a1_s2.write(90);
 a1_s3.write(90);
 delay(100);
 
 
 a4_s2.write(110);
 a4_s3.write(70);
 delay(100);
 a4_s1.write(90);
 delay(100);
a4_s2.write(90);
a4_s3.write(90); 
delay(100); 
 
 
 a2_s2.write(110);
 a2_s3.write(70);
 delay(100);
 a2_s1.write(90);
 delay(100);
a2_s2.write(90);
a2_s3.write(90); 
delay(100);
 


 a5_s2.write(70);
 a5_s3.write(110);
 delay(100);
 a5_s1.write(90);
 delay(100);
a5_s2.write(90);
a5_s3.write(90); 
delay(100);



 a6_s2.write(70);
 a6_s3.write(110);
 delay(100);
 a6_s1.write(90);
 delay(100);
a6_s2.write(90);
a6_s3.write(90); 
delay(100);
 
   a3_s2.write(110);
 a3_s3.write(70);
 delay(100);
 a3_s1.write(90);
 delay(100);
a3_s2.write(90);
a3_s3.write(90); 
delay(100);
 
 ////////////////////////////////////////////////////////////////////////////////
 ///////////////////////////////////////////////////////////////////////////////////
  //a4_s2.write(110);
 //a4_s3.write(70);
 delay(100);
 a2_s1.write(110);
 a3_s1.write(110);
 a1_s1.write(110);
 a5_s1.write(70);
 a6_s1.write(70);
 delay(100);
 
 
 
 a4_s2.write(90);
 a4_s3.write(90);
 delay(100);
 
 
 a1_s2.write(70);
 a1_s3.write(110);
 delay(100);
 a1_s1.write(90);
 delay(100);
a1_s2.write(90);
a1_s3.write(90); 
delay(100); 
 
 
 a2_s2.write(110);
 a2_s3.write(70);
 delay(100);
 a2_s1.write(90);
 delay(100);
a2_s2.write(90);
a2_s3.write(90); 
delay(100);
 


 a5_s2.write(70);
 a5_s3.write(110);
 delay(100);
 a5_s1.write(90);
 delay(100);
a5_s2.write(90);
a5_s3.write(90); 
delay(100);



 a6_s2.write(70);
 a6_s3.write(110);
 delay(100);
 a6_s1.write(90);
 delay(100);
a6_s2.write(90);
a6_s3.write(90); 
delay(100);
 
   a3_s2.write(110);
 a3_s3.write(70);
 delay(100);
 a3_s1.write(90);
 delay(100);
a3_s2.write(90);
a3_s3.write(90); 
delay(100);
 
}



void backward ()
{
 //a6_s2.write(70);
 //a6_s3.write(110);
 delay(500);
 a2_s1.write(70);
 a3_s1.write(70);
 a4_s1.write(110);
 a5_s1.write(110);
 a1_s1.write(70);
 delay(500);
 
 
 
 a6_s2.write(90);
 a6_s3.write(90);
 delay(500);
 
 
    a3_s2.write(110);
 a3_s3.write(70);
 delay(500);
 a3_s1.write(90);
 delay(500);
a3_s2.write(90);
a3_s3.write(90); 
delay(500);
 
 a5_s2.write(70);
 a5_s3.write(110);
 delay(500);
 a5_s1.write(90);
 delay(500);
a5_s2.write(90);
a5_s3.write(90); 
delay(500);


 
 
 a2_s2.write(110);
 a2_s3.write(70);
 delay(500);
 a2_s1.write(90);
 delay(500);
a2_s2.write(90);
a2_s3.write(90); 
delay(500);
 
 a4_s2.write(110);
 a4_s3.write(70);
 delay(500);
 a4_s1.write(90);
 delay(500);
a4_s2.write(90);
a4_s3.write(90); 
delay(500); 

 


 a1_s2.write(70);
 a1_s3.write(110);
 delay(500);
 a1_s1.write(90);
 delay(500);
a1_s2.write(90);
a1_s3.write(90); 
delay(500);
 

 
 ////////////////////////////////////////////////////////////////////////////////
 ///////////////////////////////////////////////////////////////////////////////////
  //a3_s2.write(110);
 //a3_s3.write(70);
 delay(500);
 a2_s1.write(70);
 a4_s1.write(110);
 a1_s1.write(70);
 a5_s1.write(110);
 a6_s1.write(110);
 delay(500);
 
 
 
 a3_s2.write(90);
 a3_s3.write(90);
 delay(500);
 
  a6_s2.write(70);
 a6_s3.write(110);
 delay(500);
 a6_s1.write(90);
 delay(500);
a6_s2.write(90);
a6_s3.write(90); 
delay(500);

 a2_s2.write(110);
 a2_s3.write(70);
 delay(500);
 a2_s1.write(90);
 delay(500);
a2_s2.write(90);
a2_s3.write(90); 
delay(500); 
 
 a5_s2.write(70);
 a5_s3.write(110);
 delay(500);
 a5_s1.write(90);
 delay(500);
a5_s2.write(90);
a5_s3.write(90); 
delay(500);

 
 a1_s2.write(70);
 a1_s3.write(110);
 delay(500);
 a1_s1.write(90);
 delay(500);
a1_s2.write(90);
a1_s3.write(90); 
delay(500); 
 
 

 

   a4_s2.write(110);
 a4_s3.write(70);
 delay(500);
 a4_s1.write(90);
 delay(500);
a4_s2.write(90);
a4_s3.write(90); 
delay(500);
 
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
