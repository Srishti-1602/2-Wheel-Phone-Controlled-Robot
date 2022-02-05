int motor1pin1 = 2;
int motor1pin2 = 7;
int motor2pin1 = 4;
int motor2pin2 = 5;
//int speedx;
void setup() {
 pinMode(motor1pin1, OUTPUT);
 pinMode(motor1pin2, OUTPUT);
 pinMode(motor2pin1, OUTPUT);
 pinMode(motor2pin2, OUTPUT);
/*speed control pins*/
 pinMode(11, OUTPUT); 
 pinMode(6, OUTPUT);
}
void loop() {  
 //Controlling speed (0 = off and 255 = max speed):
 analogWrite(11, 100); //ENA pin
  analogWrite(6, 100); //ENB pin
 //Controlling spin direction of motors:
 digitalWrite(motor1pin1, LOW);
 digitalWrite(motor1pin2, HIGH);
 digitalWrite(motor2pin1, HIGH);
 digitalWrite(motor2pin2, LOW);
// delay(5000);
// analogWrite(11, 100);
 //analogWrite(10, 50);
// delay(5000);
 /*digitalWrite(motor1pin1, LOW);
 digitalWrite(motor1pin2, HIGH);
 digitalWrite(motor2pin1, LOW);
 digitalWrite(motor2pin2, HIGH);
 delay(5000);*/
}
