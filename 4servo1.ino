// C++ code

#include <Servo.h>


Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;


void setup()
{
    servo1.attach(9);
    servo2.attach(6);
    servo3.attach(5);
    servo4.attach(3);
}

void loop() {
  for (int pos = 40; pos <= 140; pos++) {
    servo1.write(pos);
    servo2.write(pos);
    servo3.write(pos);
    servo4.write(pos);
    delay(10);
  }

  for (int pos = 140; pos >= 40; pos--) {
    servo1.write(pos);
    servo2.write(pos);
    servo3.write(pos);
    servo4.write(pos);
    delay(10);
  }
      
      while(true){
   servo1.write(90);
    servo2.write(90);
    servo3.write(90);
    servo4.write(90);
      }
}
