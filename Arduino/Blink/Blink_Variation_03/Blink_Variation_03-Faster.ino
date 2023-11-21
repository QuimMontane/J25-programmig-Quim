int dot = 1000;
int slash = 3000;
int space = 5000;

void setup() {
  // put your setup code here, to run once:
pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // Q
   digitalWrite(LED_BUILTIN, HIGH);
  delay(slash);
   digitalWrite(LED_BUILTIN, LOW);
  delay(dot); 
  digitalWrite(LED_BUILTIN, HIGH);
  delay(slash);
   digitalWrite(LED_BUILTIN, LOW);
  delay(dot); 
  digitalWrite(LED_BUILTIN, HIGH);
  delay(dot); 
  digitalWrite(LED_BUILTIN, LOW);
  delay(dot); 
  digitalWrite(LED_BUILTIN, HIGH);
  delay(slash);
  digitalWrite(LED_BUILTIN, LOW);
  delay(slash); 

  // U
  digitalWrite(LED_BUILTIN, HIGH);
  delay(dot); 
  digitalWrite(LED_BUILTIN, LOW);
  delay(dot); 
  digitalWrite(LED_BUILTIN, HIGH);
  delay(dot); 
  digitalWrite(LED_BUILTIN, LOW);
  delay(dot); 
  digitalWrite(LED_BUILTIN, HIGH);
  delay(slash);
   digitalWrite(LED_BUILTIN, LOW);
  delay(slash); 

  // I
  digitalWrite(LED_BUILTIN, HIGH);
  delay(dot); 
  digitalWrite(LED_BUILTIN, LOW);
  delay(dot); 
  digitalWrite(LED_BUILTIN, HIGH);
  delay(dot); 
  digitalWrite(LED_BUILTIN, LOW);
  delay(slash); 

  // M
  digitalWrite(LED_BUILTIN, HIGH);
  delay(slash);
   digitalWrite(LED_BUILTIN, LOW);
  delay(dot); 
  digitalWrite(LED_BUILTIN, HIGH);
  delay(slash);
   digitalWrite(LED_BUILTIN, LOW);
  delay(space); 
  
   dot = dot*0.5;
   slash = slash*0.5;
   space = 5000;


  // space

}
