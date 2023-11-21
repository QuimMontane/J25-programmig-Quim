void setup(){ 
 Serial.begin(9600);

 Serial.Println("Resolver los problemas cambiando el orden") //cambio de orden
for(int n=30; n>=1; n--){
  resolverProblemaDibujo(n);
}
} 

void loop(){   

} 

void resolverProblemaDibujo(int n){ 
 Serial.print("Resolviendo problema"); 
 Serial.println(n); 

} 
