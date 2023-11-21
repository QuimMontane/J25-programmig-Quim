void setup() {     //Problems that are multiples of 7 but not multiples of 14
  Serial.begin(9600);

  for (int n = 1; n <= 100; n++) {
    if (n % 7 == 0 && n % 14 != 0) {
      resolverProblemaDibujo(n);
    }
  }
}

void loop() {
  // This function will be called repeatedly after the setup function has executed.
  // However, the loop function is empty in this code.
}

void resolverProblemaDibujo(int n) {
  Serial.print("Resolviendo problema ");
  Serial.println(n);
}
