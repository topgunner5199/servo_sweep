/* Sweep
 by BARRAGAN <http://barraganstudio.com>
 This example code is in the public domain.

 modified 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Sweep
*/

#include <Servo.h>

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position
int input= 10;
void setup() {
  myservo.attach(3);  // attaches the servo on pin 9 to the servo object 
  Serial.begin(9600);
  
 

}

void loop() {
 

  //while (!Serial.available()){
  //Serial.println(" Enter 1= Forward 2=Back");   
 //input=Serial.read();
 // if (input==1){
  for (pos = 0; pos <= 90; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
   
 // }
  }
 // else if (input== 2){
  for (pos = 90; pos >= 0; pos -= 5) { // goes from 180 degrees to 0 degrees
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(20);                  // waits 15ms for the servo to reach the position
 // }
  }

   exit(0);
 // else if(input ==0)
 // {
 //   exit(0);
 // }
 // else
 // {
 //   Serial.println("Error please print the correct number");
 //    Serial.println(" Enter 1= Forward 2=Back");
 // }
 //Serial.println(" Enter 1= Forward 2=Back");
 //input=Serial.read();
 // }
}
