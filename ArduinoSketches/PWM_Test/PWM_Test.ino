

// Reading servos with interrupts  
// For an Arduino Mega  
// Scott Harris January 2010  
//  
// This work is licensed under the Creative Commons Attribution-Share Alike 3.0 United States License.   
// To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/3.0/us/   

#include <Servo.h>
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
  
  attachInterrupt(0,handleInterrupt_P2,CHANGE); // Catch up and down   
  attachInterrupt(1,handleInterrupt_P3,CHANGE); // Catch up and down   
  attachInterrupt(5,handleInterrupt_P18,CHANGE); // Catch up and down   
  attachInterrupt(4,handleInterrupt_P19,CHANGE); // Catch up and down   

  myservo.attach(9);
  myservo.write(0);
  
  //establishContact();  // send a byte to establish contact until receiver responds
}  

void loop()  
{  
  delay(10);  
  
  //Arduino PWM Test Code
  // check for incoming serial data:
  String oString;
  while(Serial.available() > 0) {
    // read incoming serial data:
    char inChar = Serial.read();
    oString += inChar;
  }
  
  if (oString.length() > 0){
    int n = oString.toInt();
    myservo.write(n);
    oString = "";
  }
  
  String output = "(" + String(servo0,DEC) + "," + String(servo1,DEC) + "," + String(servo2,DEC) + "," + String(servo3,DEC) + ")";
  // Serial.println(servo0,DEC); // Pulsewidth in microseconds
  // Serial.println(servo1,DEC); // Pulsewidth in microseconds  
  Serial.println(output);
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
}  


void establishContact() {
  while (Serial.available() <= 0) {
    Serial.println('A');   // send a capital A
    delay(300);
  }
}
