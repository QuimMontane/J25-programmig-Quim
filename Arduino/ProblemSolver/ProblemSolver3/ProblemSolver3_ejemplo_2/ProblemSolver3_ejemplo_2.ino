void setup() {      //Problems that are prime numbers
  Serial.begin(9600); 

  for (int n = 1; n <= 100; n++) {
    if (n % 2 == 1 && n % 3 == 0 && esPrimo(n)) {
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

bool esPrimo(int num) {
  if (num <= 1) {
    return false;
  }
  for (int i = 2; i <= sqrt(num); i++) {
    if (num % i == 0) {
      return false;
    }
  }
  return true;
}
