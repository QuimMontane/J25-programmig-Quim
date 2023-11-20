int dotDurantion = 1000;

void setup() {
  // put your setup code here, to run once:
pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // Q
   digitalWrite(LED_BUILTIN, HIGH);
  delay(dotDurantion*3);
   digitalWrite(LED_BUILTIN, LOW);
  delay(dotDurantion); 
  digitalWrite(LED_BUILTIN, HIGH);
  delay(dotDurantion*3);
   digitalWrite(LED_BUILTIN, LOW);
  delay(dotDurantion); 
  digitalWrite(LED_BUILTIN, HIGH);
  delay(dotDurantion); 
  digitalWrite(LED_BUILTIN, LOW);
  delay(dotDurantion); 
  digitalWrite(LED_BUILTIN, HIGH);
  delay(dotDurantion*3);
  digitalWrite(LED_BUILTIN, LOW);
  delay(dotDurantion*3); 

  // U
  digitalWrite(LED_BUILTIN, HIGH);
  delay(dotDurantion); 
  digitalWrite(LED_BUILTIN, LOW);
  delay(dotDurantion); 
  digitalWrite(LED_BUILTIN, HIGH);
  delay(dotDurantion); 
  digitalWrite(LED_BUILTIN, LOW);
  delay(dotDurantion); 
  digitalWrite(LED_BUILTIN, HIGH);
  delay(dotDurantion*3);
   digitalWrite(LED_BUILTIN, LOW);
  delay(dotDurantion*3); 

  // I
  digitalWrite(LED_BUILTIN, HIGH);
  delay(dotDurantion); 
  digitalWrite(LED_BUILTIN, LOW);
  delay(dotDurantion); 
  digitalWrite(LED_BUILTIN, HIGH);
  delay(dotDurantion); 
  digitalWrite(LED_BUILTIN, LOW);
  delay(dotDurantion*3); 

  // M
  digitalWrite(LED_BUILTIN, HIGH);
  delay(dotDurantion*3);
   digitalWrite(LED_BUILTIN, LOW);
  delay(dotDurantion); 
  digitalWrite(LED_BUILTIN, HIGH);
  delay(dotDurantion*3);
   digitalWrite(LED_BUILTIN, LOW);
  delay(dotDurantion*3); 
  
  // space

}
