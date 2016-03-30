#include <Servo.h>
 Servo servo1; 
void setup() {
  // put your setup code here, to run once:

  servo1.attach(9);
}

void loop() {
 int deplayTime = 4;
 /* the fastest the servo can operate is at 60 degrees per 230 milliseconds
 so the delay for going from 0 - 180 with an increment of 1, would be 4 milliseconds (rouding up) */
 // put your main code here, to run repeatedly:
 for(int i = 0; i <= 180; i++){
   delay(deplayTime);
   servo1.write(i);
 }
 for(int i = 180; i >= 0; i--){
   delay(deplayTime);
   servo1.write(i);
 }
}
