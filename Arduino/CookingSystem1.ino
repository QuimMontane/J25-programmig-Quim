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
}

void cook(){
  Serial.println("we are cooking");
}