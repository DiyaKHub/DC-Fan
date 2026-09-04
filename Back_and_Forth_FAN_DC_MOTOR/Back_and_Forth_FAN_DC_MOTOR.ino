const int Forward_PIN = 8;
const int Backward_PIN = 12;
const int delayTime = 2000;


void setup() {
  pinMode (Forward_PIN, OUTPUT);
  pinMode (Backward_PIN, OUTPUT);
  

}

void loop() {

  // STOP
  digitalWrite (Forward_PIN, LOW);
  digitalWrite (Backward_PIN, LOW);

  delay (delayTime); 

// FORWARD 
  digitalWrite (Forward_PIN, HIGH); // Gives potential dif. in one direction
  digitalWrite (Backward_PIN, LOW);

delay (delayTime); 

// BACKWARD
  digitalWrite (Forward_PIN, LOW);
  digitalWrite (Backward_PIN, LOW);

delay (delayTime); 

//STOP
  digitalWrite (Forward_PIN, LOW);
  digitalWrite (Backward_PIN, HIGH); // Gives potential dif. in opp. direction

 delay (delayTime); 


}
