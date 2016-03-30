#include <Servo.h>
 Servo servo1; 
void setup() {
  // put your setup code here, to run once:

  servo1.attach(9);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i = 0; i <= 180; i++){
    delay(20);
    servo1.write(i);
  }
  for(int i = 180; i >= 0; i--){
    delay(20);
    servo1.write(i);
  }

}
