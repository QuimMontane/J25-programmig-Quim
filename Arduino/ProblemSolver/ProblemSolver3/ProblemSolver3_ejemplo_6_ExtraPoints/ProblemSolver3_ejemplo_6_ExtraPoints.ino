void setup() {
  Serial.begin(9600);

  for (int n = 1; n <= 30; n++) {
    if (n % 2 == 1 && n % 3 == 0 && sumOfDigitsIsEven(n)) {
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

bool sumOfDigitsIsEven(int num) {
  int sum = 0;
  while (num != 0) {
    sum += num % 10; // Add the last digit to the sum
    num /= 10;       // Remove the last digit from the number
  }
  return sum % 2 == 0;
}
