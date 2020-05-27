#include <AccelStepper.h>
#include <MultiStepper.h>


AccelStepper Xaxis(1, 2, 5); // pin 3 = step, pin 6 = direction
AccelStepper Yaxis(1, 3, 6); // pin 4 = step, pin 7 = direction
AccelStepper Zaxis(1, 4, 7); // pin 5 = step, pin 8 = direction
int enPin = 8;
int User_Input = 0;
int UpperLimit = 0;
String readString;

void setup() {
  Xaxis.setMaxSpeed(8000);
  Yaxis.setMaxSpeed(8000);
  Zaxis.setMaxSpeed(8000);


  Xaxis.setAcceleration(22000);
  Yaxis.setAcceleration(20000);
  Zaxis.setAcceleration(20000);

  Xaxis.setSpeed(4000);
  Yaxis.setSpeed(4000);
  Zaxis.setSpeed(4000);

  pinMode(enPin, OUTPUT);
  digitalWrite(enPin, LOW);

  Serial.begin(9600);
  Serial.println("Stepper Controller:");

}



void loop() {


  Xaxis.runToNewPosition(0);
  delay(10);
  Xaxis.runToNewPosition(1500);
  delay(10);
  Xaxis.runToNewPosition(3000);
  delay(10);
  Xaxis.runToNewPosition(4000);
  delay(10);
  Xaxis.runToNewPosition(7000);
  delay(10);
  Xaxis.runToNewPosition(0);
  delay(10);
  Xaxis.runToNewPosition(4000);
  delay(10);
  Xaxis.runToNewPosition(0);
  delay(10);
  Xaxis.runToNewPosition(7000);
  delay(10);
  Xaxis.runToNewPosition(2000);
  delay(10);
  Xaxis.runToNewPosition(0);
  delay(10);
  
}
