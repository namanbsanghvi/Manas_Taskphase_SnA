void setup(){
  //begin serial communication
  Serial.begin(9600);
}


void loop(){
  Serial.print("Hi! ");
  delay(500);
  Serial.println("Sending data from one Arduino to another/");
  // "/" representd end of the incoming values
  delay(500);
}
