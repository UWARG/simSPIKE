#include <Servo.h>
#include "GPSServer.h"
#include "main.h"
Servo myservo;

//Serial Data Stuff
byte byteRead;

//PWM Setup Stuff
volatile long servo0; // servo value
volatile long count0; // temporary variable for servo0  

volatile long servo1; // servo value  
volatile long count1; // temporary variable for servo1

volatile long servo2; // servo value  
volatile long count2; // temporary variable for servo2  

volatile long servo3; // servo value  
volatile long count3; // temporary variable for servo3

// PIN 2
#define int0 (PINE & 0x10)

// PIN 3
#define int1 (PINE & 0x20)

// PIN 18
#define int2 (PIND & 0b00001000)

// PIN 19
#define int3 (PIND & 0b00000100)

void handleInterrupt_P2()  
{  
  if(int0)  
    count0=micros(); // we got a positive edge  
  else  
    servo0=micros()-count0; // Negative edge: get pulsewidth  
}

void handleInterrupt_P3()  
{  
  if(int1)  
    count1=micros(); // we got a positive edge  
  else  
    servo1=micros()-count1; // Negative edge: get pulsewidth  
}  

void handleInterrupt_P18()  
{  
  if(int2)  
    count2=micros(); // we got a positive edge  
  else  
    servo2=micros()-count2; // Negative edge: get pulsewidth  
} 

  void handleInterrupt_P19()  
{  
  if(int3)  
    count3=micros(); // we got a positive edge  
  else  
    servo3=micros()-count3; // Negative edge: get pulsewidth  
} 

void setup()  
{  
  Serial.begin(9600);  
  while (!Serial) {
    ; // wait for serial port to connect. Needed for Leonardo only
  }
  
  //Servo Setup Stuff
  pinMode(2,INPUT);  
  pinMode(3,INPUT);    
  pinMode(18,INPUT); 
  pinMode(19,INPUT); 
  
//  digitalWrite(2,LOW);  
//  digitalWrite(3,LOW);    
//  digitalWrite(18,LOW); 
//  digitalWrite(19,LOW); 
  
  attachInterrupt(0,handleInterrupt_P2,CHANGE); // Catch up and down   
  attachInterrupt(1,handleInterrupt_P3,CHANGE); // Catch up and down   
  attachInterrupt(5,handleInterrupt_P18,CHANGE); // Catch up and down   
  attachInterrupt(4,handleInterrupt_P19,CHANGE); // Catch up and down   

  myservo.attach(9);
  myservo.write(0);

  //Setup GPS
  initGPS();
  
  //establishContact();  // send a byte to establish contact until receiver responds
}  

void loop()  
{  
  delay(10);  
  receiveFromComputer();
  sendToPicPilot();
  receiveFromPicPilot();
  sendToComputer();
  
  //Arduino PWM Test Code
  // check for incoming serial data:
//  String oString;
//  while(Serial.available() > 0) {
//    // read incoming serial data:
//    char inChar = Serial.read();
//    oString += inChar;
//  }
//  
//  if (oString.length() > 0){
//    int n = oString.toInt();
//    myservo.write(n);
//    oString = "";
//  }
  
//  int throttle = 0;
//  int aileron = 0;
//  int elevator = 0;
//  int rudder = 0;
//  
//  throttle = 100*((int)servo0 - 1012)/100;
//  
//  //Hack around
//  aileron = ((int)servo1 - 1524);
//  aileron = (int)((double)aileron*7.575757575);
//  
//  elevator = ((int)servo2 - 1496);
//  elevator = (int)((double)elevator*12.82051282);
//
//  rudder = ((int)servo3 - 1504);
//  rudder = (int)((double)rudder*8.287292818);
}

void sendToPicPilot(){
  //IMU communicates over SPI
//  getIMU();

  //GPS communicates over SPI
  sendGPS();
  
}

void sendToComputer(){
  //Send Servo Data
}

void receiveFromPicPilot(){
  //Read Servos
  
}

void receiveFromComputer(){
  //Stores simulated IMU data for next PicPilot update
//  setIMU();

  //Stores simulated GPS data for next PicPilot update
  setGPS();
}


void getIMU(){
  
}
  
//  elevator = 1000*((int)servo2 - 1496)/390;
//  rudder = 1000*((int)servo3 - 1504)/362;
  
  
  //WHAT THE FUCK IS GOING ON.....
//  aileron = ((int)servo1 - 1600)*1000;
//  if (aileron < 0)
//    aileron = aileron*(30/396);
//  else
//    aileron = aileron*(30/392);
//  
//  int elevatorDiff = (int)servo2 - 1496;
//  Serial.println(elevatorDiff);
//  if (elevatorDiff >= 0){
//    Serial.println("TEST1");
//    elevator = (1000*elevatorDiff*30)/400;
//  }
//  else if (elevatorDiff <= 0){
//    Serial.println("TEST2");
//    Serial.println(elevator);
//    elevator = (1000*elevatorDiff*30)/380;
//    Serial.println(elevator);
//  }
//  Serial.println(elevator);
//   rudder = ((int)servo3 - 1504)*1000;
//  if (rudder < 0)
//    rudder = rudder*(30/356);
//  else
//    rudder = rudder*(30/368);
    
  
  //String output = "(" + String(servo0,DEC) + "," + String(servo1,DEC) + "," + String(servo2,DEC) + "," + String(servo3,DEC) + ")";
//  String output = "(" + String(throttle,DEC) + "," + String(aileron,DEC) + "," + String(elevator,DEC) + "," + String(rudder,DEC) + ")";
//  Serial.println(output);
    
  //Serial.println(servo0,DEC); // Pulsewidth in microseconds
  // Serial.println(servo1,DEC); // Pulsewidth in microseconds  
  //Serial.println(servo0,DEC); // Pulsewidth in microseconds  
  // Serial.println(servo3,DEC); // Pulsewidth in microseconds 
 
 
  
//  while (Serial.available() <= 0) {
//    Serial.println('B');   // send a capital A
//    delay(300);
//  }
//  // if we get a valid byte, read analog ins:
//  if (Serial.available()) {
//    /* read the most recent byte */
//    byteRead = Serial.read();
//    
//    /*Listen for a comma which equals byte code # 44 */
//    if(byteRead==44){
//      Serial.println();
//    }else{
//      /*ECHO the value that was read, back to the serial port. */
//      Serial.write(byteRead);
//    }
//  }  


void establishContact() {
  while (Serial.available() <= 0) {
    Serial.println('A');   // send a capital A
    delay(300);
  }
}
