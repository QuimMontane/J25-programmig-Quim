void setup(){ 
 Serial.begin(9600);

 Serial.Println("Solo problemas impares");
 for(int numeroProblema = 1; numeroProblema<=30; numeroProblema=numeroProblema+2){
   resolverProblemaDibujo(numeroProblema); //solo problemas impares
 } 
} 

void loop(){   

} 

void resolverProblemaDibujo(int n){ 
 Serial.print("Resolviendo problema"); 
 Serial.println(n); 

} 
