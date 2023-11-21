void setup(){ 
 Serial.begin(9600);

 //todos menos el 17

 //manera más simple
for(int n; n<=30; n++){
  if(n!=17){
    resolverProblemaDibujo(n);
  }
}

//implementación diferente
for(int n; n<=30; n++){
  if(n==17){n++;}
    resolverProblemaDibujo(n);
}
} 

void loop(){   

} 

void resolverProblemaDibujo(int n){ 
 Serial.print("Resolviendo problema"); 
 Serial.println(n); 

} 
