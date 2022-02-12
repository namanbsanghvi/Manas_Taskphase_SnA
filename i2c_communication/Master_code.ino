/*
This is master code
*/


#include <Wire.h>
#define SLAVE_ADD 9 // address of slave
#define ANS_SIZE 11 // the size of received string


void setup() {
  Serial.begin(9600);
  
  Wire.beginTransmission(SLAVE_ADD); // Initiationg the data
  Wire.write(0);                     // Sending the data
  Wire.endTransmission();            // End of data transmission
  Serial.println("Data Sent");
  delay(1000);
  
  Wire.requestFrom(SLAVE_ADD, ANS_SIZE); // Requesting data from slave
  String x;                              // Storing incoming data in a string
  if (Wire.available() > 0){
    char b = Wire.read();
    x += b;
  }
  Serial.print(x);
  Serial.println(" :is the data received");
}

void loop() {
  // put your main code here, to run repeatedly:

}
