//cooking system 2
//recipe: 2 eggs, 1 potato, 0,25 onion, oil
int eggs= 4;
int potato= 0;
boolean oil= true;
double onion= 1;

void setup() {
Serial.begin(9600);
}

void loop() {

String input = Serial.readString();

if(input !=""){
Serial.println("has escrito: ");
Serial.println(input);
input.trim();
decide(input);
}
}

void decide(String input){
Serial.println("we are deciding");
if(input == "cook"){
  cook();
}  
if(input=="potato"){potato++;}
}

void cook(){
  Serial.println("we are cooking");
  if(eggs >= 2 &&
     potato >= 1 &&
     onion >= 0.25 && oil){
      Serial.println("you have a Spanish Omelette");
      eggs=eggs-2;
      potato--;
      onion=onion-0.25;
     }
}
