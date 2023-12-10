void setup() {

  Serial.begin(9600);

  int grades[] = { 9, 5, 8, 3, 2, 9, 3, 1, 7 };

  int min = grades[0];

  for (int i = 1; i < 9; i++) {

    if (grades[i] < min) {

      min = grades[i];

      Serial.println(i);  
    }
  }

  Serial.println(min);

  delay(500);
}

void loop() {
}
