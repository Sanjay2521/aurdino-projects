/*
  this  code is designed keeping in mind that, to avoid the overflow of water a
over the bridge,
  the advantage is :
1) increase the road life
in this project  components that I am using  are:
2 servo motors 
1 moisture sensor 
Arduino  UNO
*\

#include <Servo.h>

#include <Servo.h>


Servo tap_servo;

int sensor_pin = 5;   //moisture sensor read pin
int tap_servo_pin =4; // servo motor defined 
int val;

void setup(){
  pinMode(sensor_pin,INPUT);
  tap_servo.attach(tap_servo_pin);
  Serial.begin(9600);
  
}

void loop(){
  val = digitalRead(sensor_pin);

  if (val==0)
  {tap_servo.write(0);
  }
  if (val==1)
  {tap_servo.write(90);
    }
  Serial.println(val);
  delay(1000);
}
