int dotDuration = 500;

void setup() { 
  pinMode(LED_BUILTIN, OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  // Q
  morseDash();
  morseDash();
  morseDot();
  morseDash();
  delay(2*dotDuration);
  
  // U
  morseDot();
  morseDot();
  morseDash();
  delay(2*dotDuration);

  // I
  morseDot();
  morseDot();
  delay(2*dotDuration);

  // M
  morseDash();
  morseDash();
  delay(6*dotDuration);
}


void morseDot() {

 digitalWrite(LED_BUILTIN, HIGH);
  delay(dotDuration); 
  digitalWrite(LED_BUILTIN, LOW);
  delay(dotDuration); 
}

void morseDash() {

digitalWrite(LED_BUILTIN, HIGH);
  delay(dotDuration*3);
   digitalWrite(LED_BUILTIN, LOW);
  delay(dotDuration); 
}




