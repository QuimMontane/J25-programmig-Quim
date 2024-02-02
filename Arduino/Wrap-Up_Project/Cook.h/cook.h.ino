int rice = 2;
int noriSeaweed = 0;
int salmon = 0;
bool avocado = true;
double soy = 0.25;
 

 void cook() {
  String input = Serial.readString();
    if (input != "") {
      Serial.println();
      Serial.print("you have written: ");
      Serial.println(input);
      input.trim();
      //decide(input);
 }
    Serial.println("You are cooking");
    Serial.println("You are making sushi");
  if (rice >= 2 && noriSeaweed >= 1 && salmon >= 1 && soy >= 0.25 && avocado){
    Serial.println("you have sushi");
      rice = rice - 2;
      noriSeaweed--;
      soy = soy - 0.25;
 }
}


void decide2(String input) {
  Serial.println("We are deciding");
 if (input == "cook") {
 cook();
 }
 if(input=="rice"){
  rice++;
 }
 if(input=="noriSeaweed"){
  noriSeaweed++;
 }
 if(input=="salmon"){
  salmon++;
  }
 if(input=="soy"){
  soy++;
  }
 }
