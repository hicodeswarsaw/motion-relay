const int echopin = 6; // echo pin from distance sensor
const int trigpin = 5; // Trigger pin from distance sensor 

const int maximumRange = 40;  // Maximum measured range in CM you can change it for own purpose

long duration;
int distanceCM;

void setup() 

{
  
  Serial.begin (9600);        // just in case if you want to use serial monitor
  pinMode (trigpin, OUTPUT);
  digitalWrite(trigpin,LOW);
  pinMode (echopin, INPUT );   
  pinMode (9,OUTPUT);          // define relay pin on your arduino
  
}

void loop() 

{
  
  digitalWrite(trigpin, HIGH);   
  delayMicroseconds(2);
  digitalWrite(trigpin, LOW);
  delayMicroseconds(10);    
  duration = pulseIn (echopin, HIGH, maximumRange*40);     

  distanceCM = duration/5;
  
  delay (50);
  Serial.println(distanceCM);    // Turn on the output iff distance 60 to 80 cm inclusive.
  digitalWrite(9, distanceCM >= 5 && distanceCM <= 10);
  
}

