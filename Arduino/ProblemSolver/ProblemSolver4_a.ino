void setup() {
  Serial.begin(9600);

  for (int n = 1; n <= 100; n++) {
    if (hasDigitThree(n)) {
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

bool hasDigitThree(int num) {
  while (num != 0) {
    if (num % 10 == 3) {
      return true;  // Return true if '3' is found in the digits
    }
    num /= 10;       // Remove the last digit from the number
  }
  return false;      // '3' not found in the digits
}