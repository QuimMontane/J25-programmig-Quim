int dotDuration = 500;


void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
 morse_Q();
 morse_U();
 morse_I();
 morse_M();
 delay(dotDuration*4);
}


morse letters

void morse_Q(){
 morseBlink(3);
 morseBlink(3);
 morseBlink(1);
 morseBlink(3);
 delay(dotDuration*2);
}

void morse_U(){
 morseBlink(1);
 morseBlink(1);
 morseBlink(3);
 delay(dotDuration*2);
}

void morse_I(){
 morseBlink(1);
 morseBlink(1);
 delay(dotDuration*2);
}

void morse_M(){
 morseBlink(3);
 morseBlink(3);
 delay(dotDuration*2)
}


void morseBlink(int NumberOfDots){
  
  digitalWrite(LED_BUILTIN, HIGH);
  delay(NumberOfDots*dotDuration); 
  digitalWrite(LED_BUILTIN, LOW);
  delay(dotDuration); 



}