void setup() {
  Serial.begin(9600);

  for (int n = 1; n <= 100; n++) {
    if (isOdd(n) || isMultipleOfSix(n)) {
      resolverProblemaDibujo(n);
    }
  }
}

void loop() {
  // This function will be called repeatedly after the setup function has executed.
  // However, the loop function is empty in this code.
}

void resolverProblemaDibujo(int n) {
  // This function takes an integer argument 'n' and prints a message indicating that it is solving a problem.
  Serial.print("Resolviendo problema ");
  Serial.println(n);
}

bool isOdd(int num) {
  return num % 2 != 0;
}

bool isMultipleOfSix(int num) {
  return num % 6 == 0;
}
