/*
This is slave code
*/

#include <Wire.h>
#define SLAVE_ADD 9
#define ANS_SIZE 11

String answer = "Hello World";

void setup() {
  Serial.begin(9600);
  Wire.begin(SLAVE_ADD);        // Initiating the transmission as a slave device

  Wire.onRequest(dataRequest);  // Calling dataRequest when data is received

  Wire.onReceive(dataReceived); // Calling dataReceived when data is received
}

// Defining dataRequest
void dataRequest(){
  byte request[ANS_SIZE];   // Making an array of appropriate size
  for (int i=0; i<ANS_SIZE; i++){
    request[i] = (byte)answer.charAt(i);
  }
  Wire.write(request, sizeof(request));
  Serial.println("Data Sent");
}

// Definig dataReceived
void dataReceived(int){
  byte h;
  if (Wire.available()>0){
    h = Wire.read();
  }
  Serial.print(h);
  Serial.println(" :is the data received");
}



void loop() {
  delay(100);

}
