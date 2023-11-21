void setup(){ 
 Serial.begin(9600);

 //todos menos el 17 y el 23

 //manera simple
for(int n; n<=30; n++){
  if(n!=17 && n!=23){
    resolverProblemaDibujo(n);
  }
}

//diferente manera
if(!(n==17||n==23)){resolverProblemaDibujo(n)}
} 

void loop(){   

} 

void resolverProblemaDibujo(int n){ 
 Serial.print("Resolviendo problema"); 
 Serial.println(n); 

} 
