void setup() {
  Serial.begin(9600);
  int depths[] = {90, 85, 88, 83, 82, 91, 91, 100, 97};
  int speeds[] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
  int increasedDepth = 0;
  int decreasedDepth = 0;
  int unchangedDepth = 0;

  for (int i = 1; i < 9; i++) {
    if (depths[i] > depths[i - 1]) {
      increasedDepth++;
      speeds[i] = depths[i] - depths[i - 1];
    } else if (depths[i] < depths[i - 1]) {
      decreasedDepth++;
      speeds[i] = depths[i - 1] - depths[i];
    } else {
      unchangedDepth++;
    }
  }

  Serial.print("Veces que la profundidad ha aumentado: ");
  Serial.println(increasedDepth);

  Serial.print("Veces que la profundidad ha descendido: ");
  Serial.println(decreasedDepth);

  Serial.print("Veces que la profundidad ha permanecido igual: ");
  Serial.println(unchangedDepth);

  Serial.println("Velocidades correspondientes:");
  for (int i = 0; i < 9; i++) {
    Serial.print("Posición ");
    Serial.print(i);
    Serial.print(": ");
    Serial.println(speeds[i]);
  }

  // Calcular mínimo, máximo y media de speeds
  int minSpeed = speeds[0];
  int maxSpeed = speeds[0];
  int sumSpeeds = speeds[0];

  for (int i = 1; i < 9; i++) {
    if (speeds[i] < minSpeed) {
      minSpeed = speeds[i];
    }
    if (speeds[i] > maxSpeed) {
      maxSpeed = speeds[i];
    }
    sumSpeeds += speeds[i];
  }

  float averageSpeed = static_cast<float>(sumSpeeds) / 9;

  Serial.print("Mínimo de velocidades: ");
  Serial.println(minSpeed);

  Serial.print("Máximo de velocidades: ");
  Serial.println(maxSpeed);

  Serial.print("Media de velocidades: ");
  Serial.println(averageSpeed);
}

void loop() {
 
}
