void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

if (results.value == OxFF629D)
myServol.write(60); //rotate forward 
myServo2.write(122); //rotate forward 
delay(4000);
else {
myServol.write(90); //Stop 
myServo2.write(90); //Stop 
delay(2000);
if (results.value == OxFFA857)
// Backward
myServol.write(122); //rotate forward 
myServo2.write(60); //rotate forward 
delay(4000);
else {
myServol.write(90); //Stop 
myServo2.write(90); //Stop 
delay(2000);
if (results.value == OxFF22DD)
// Left
myServol.write(120); //rotate Left
 myServo2.write(120); //rotate Left 
delay(600);
else {
myServol.write(90); //Stop 
myServo2.write(90); //Stop 
delay(3000);
if (results.value == OxFFC23D)
// Right
myServol.write(60); //rotate Right 
myservo.write(60); //rotate Right 
delay(500);
else {
myServol.write(90); //Stop 
myservo.write(90); //Stop 
delay(3000);


}
