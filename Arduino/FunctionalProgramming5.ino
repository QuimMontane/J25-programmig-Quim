void setup() {
  Serial.begin(9600);

}

void loop() {
  
morse_Q();
morse_U();
morse_I();
morse_M();
Serial.println();
delay(1000);
}

void morse_Q(){
  morseDash();
  morseDash();
  morseDot();
  morseDash();
  Serial.print("/");
}

void morse_U(){
  morseDot();
  morseDot();
  morseDash();
  Serial.print("/");
}

void morse_I(){
morseDot();
morseDot();
Serial.print("/");
}

void morse_M(){
morseDash();
morseDash();
Serial.print("/");
}

void morseDot(){
  Serial.print(".");
}

void morseDash(){
  Serial.print("-");
}

