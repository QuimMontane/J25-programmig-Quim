void setup() {      //Problems divisible by both 4 and 6
  Serial.begin(9600);

  for (int n = 1; n <= 100; n++) {
    if (n % 4 == 0 && n % 6 == 0) {
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
