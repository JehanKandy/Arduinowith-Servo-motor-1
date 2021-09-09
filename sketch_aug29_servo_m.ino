//...............JehanKandy........................
//........www.jehankandy.com.......................
//........www.github.com/JehanKandy................

//.......................Motors....................
//.................Servo Motor Basic...............

//in here you should include Servo.h lib..
#include <Servo.h>

//define servo motor
Servo motor1;



void setup() {
  //define pins for Servo Motors
  motor1.attach(2);  

}

void loop() {
  //in here you can give value form 0 to 180(0 -> 180)
  
  motor1.write(30); 
  delay(1000);
  motor1.write(30);
  delay(1000);

}

//.........coded by : JehanKandy....
//...........Thank You..............
