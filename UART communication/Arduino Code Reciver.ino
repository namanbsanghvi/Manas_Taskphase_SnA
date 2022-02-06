//character to store incoming values
char str;

void setup(){
  Serial.begin(9600);
  //starting the serial communication
}

void loop(){
  
  //check for incoming values
  while(Serial.available()){
    //store the value in str variable
    str = Serial.read();
    
    //break the loop of there is '/' recieved
    if (str == '/'){
      Serial.println("");
      break;
    }
    
    //else print the incoming values
    else {
      Serial.print(str);
    }
    
  }
}
