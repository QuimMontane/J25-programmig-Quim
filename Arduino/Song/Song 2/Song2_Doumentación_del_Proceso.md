---
# Documentación de como he hecho el Song2
---


![los peces en el rio version simplificada](https://github.com/QuimMontane/J25-programmig-Quim/assets/144990948/00f3fec4-5093-4e77-b6c7-5b40a0097d67)



## Paso 1:
Lo primero que hize, fue irme a google y buscar partituras de canciones para hacer, porque no sabia cual hacer, entonces me tope con la de los peces en el rio, la version simplificada,
porque sino seria demasiado largo. 
Luego volvi a buscar por google, cuales eran las notas musicales "Do,Re,Mi,Fa,Sol,La,Si" y donde estaban posicionadas, porque no me acordaba. 

![Notas-musicales-1](https://github.com/QuimMontane/J25-programmig-Quim/assets/144990948/79bcd92f-56a7-45c6-b187-972230c659fc)




## Paso 2:
Una vez lo tenia aprendido, me fui a ver la partitura de los peces en el rio, y ha apunter todas las notas, para asi luego me sea mas facil y rapido ponerlas en el código:
```
//do  

//do  

//do 

//do  

//si  

//la  

//si  

//mi 

//re  

//re  

//re  

//re  

//do 

//si  

//do  

//si  

//la   

//do  

//do  

//do  

//do  

//si  

//la 

//si  

//sol 

//mi  

//re  

//re  

//re  

//re  

//do  

//la  

//do  

//si  

//la  

//la  

//si  

//do  

//do  

//do  

//do  

//do  

//do  

//do  

//re  

//do  

//re  

//do  

//si  

//si  

//la  

//sol

//la  

//si  

//do  

//la  

//do  

//do  

//do  

//do  

//do  

//do 
```

## Paso 3:

Luego me fui a buscar por internet cuanto valia beats valia cada nota.

![beats of the notes](https://github.com/QuimMontane/J25-programmig-Quim/assets/144990948/8e3cb39b-615d-4997-83d2-685cacde6fa5)

Una vez lo entendi, le puse cuanto valia a cada nota de la lista que hize anteriormente de las notas de toda la partitura, para que asi luego al ponerlo en el código me sea más facil y 
rápido:
```
//do 1 

//do 0.5 

//do 1 

//do 1 

//si 0.5 

//la 1 

//si 1 

//mi 2

//re 1 

//re 0.5 

//re 1 

//re 1 

//do 0.5

//si 1 

//do 1 

//si 1 

//la 2  

//do 1 

//do 1 

//do 1 

//do 1 

//si 1 

//la 1 

//si 1 

//sol 1 

//mi 2 

//re 1 

//re 0.5 

//re 1 

//re 1 

//do 0.5 

//la 1 

//do 1 

//si 1 

//la 1 

//la 0.5 

//si 1 

//do 0.5 

//do 0.5 

//do 0.5 

//do 1 

//do 1 

//do 0.5 

//do 0.5 

//re 0.5 

//do 0.5 

//re 0.5 

//do 1 

//si 1 

//si 0.5 

//la 1 

//sol 0.5

//la 0.5 

//si 0.5 

//do 1 

//la 2 

//do 1 

//do 0.5 

//do 1 

//do 1 

//do 0.5 

//do 1 
```


## Paso 4:

Fui otra vez a google, y busque cual era la frecuencia para cada nota, luego identifique las notas musicales con unas letras para identificarlas más rápido:
```
// Do = c

// Re = d

// Mi = e

// Fa = f

// Sol = g

// La = a

// Si = b
```

Una vez las identifique, les puse un valor a las letras de antes, para luego en el código, no tener que ir poniendo tantos números y la mayoria se repiten bastante, ese valor que le 
hemos puesto a las letras es la frecuencia que hemos buscando antes:
```
int c=523;

int d=587;

int e=659;

int f=698;

int g=783;

int a=880;

int b=987;
```


## Paso 5:

Quise intercambiar los números al lado de las notas en otras letras, para asi no liarnos con los demás números y luego querer usar el código y por una tonteria no funcione:
```
// 4=y 

// 2=x

// 1=z

// 0.5=w
```

Luego, lo que hize, fue que calcule cuantos milisegundos hay en 1 minuto, lo calcule en milisegundos, porque c++ usa milisegundos, eso me daba 60000 milisegundos, entonces, cada letra 
valia un número, y cada número de esos, valia tanto, como ya vimos antes, entonces para saber cuanto tiene que durar cada nota, lo que hize, fue poner (la letra) = (60000) dividido (el 
número multiplicado por 110), usamos 110 porque lo ponia en la partitura.
```
int y=60000/440;

int x=60000/220;

int z=60000/110;

int w=60000/55;
```


## Paso 6:

Ahora ya empezamos a construir el código, lo que hize, fue irme al **Song1** y cogi esto de referenia:

 ```tone(9,293.66,200);
  delay(200);
 ```
El primer número dentro del parentesis del tone, es el Pin, el segundo, es la frecuencia y el tercero es el tiempo que dura la nota.
Luego esta el delay, en el delay, yo voy a poner el mismo número que el tiempo que dura la nota + 50 milisegundos.


Asi es como queda para una sola nota:

```
tone(9,c,z);
  delay(z+50);  
```

Como ya he dicho anteriormente, yo no usare casi números, para que asi sea más visual, más rápido y facil identificar que significa y encontrarlo.


Mientras iba poniendo todas las notas dentro de el código, le iba poniendo un gión al lado de cada nota la qual ya puse en el código, para que asi se me sea más facil identificar cuales 
ya he puesto y no equivocarme:

```
//do 1 -
//do 0.5 -
//do 1 -
//do 1 -
//si 0.5 -
//la 1 -
//si 1 -
//mi 2-
//re 1 -
//re 0.5 -
//re 1 -
//re 1 -
//do 0.5 -
//si 1 -
//do 1 -
//si 1 -
//la 2 - 
//do 1 -
//do 1 -
//do 1 -
//do 1 -
//si 1 -
//la 1 -
//si 1 -
//sol 1 -
//mi 2 -
//re 1 -
//re 0.5 -
//re 1 -
//re 1 -
//do 0.5 -
//la 1 -
//do 1 -
//si 1 -
//la 1 -
//la 0.5 -
//si 1 -
//do 0.5 -
//do 0.5 -
//do 0.5 -
//do 1 -
//do 1 -
//do 0.5 -
//do 0.5 -
//re 0.5 -
//do 0.5 -
//re 0.5 -
//do 1 -
//si 1 -
//si 0.5 -
//la 1 -
//sol 0.5 -
//la 0.5 -
//si 0.5 -
//do 1 -
//la 2 -
//do 1 -
//do 0.5 -
//do 1 -
//do 1 -
//do 0.5 -
//do 1 -
```



## Paso 7:


Acabar de poner todas las letras y números.
Asi es como quedaria el resultado final:

```
tone(9,c,z);
  delay(z+50);       
tone(9,c,w);
  delay(w+50);
tone(9,c,z);
  delay(z+50);
tone(9,c,z);
  delay(z+50);
tone(9,b,w);
  delay(w+50);
tone(9,a,z);
  delay(z+50);
tone(9,b,z);
  delay(z+50);
tone(9,e,x);
  delay(x+50);
tone(9,d,z);
  delay(z+50);
tone(9,d,w);
  delay(w+50);
tone(9,d,z);
  delay(z+50);
tone(9,d,z);
  delay(z+50);
tone(9,c,w);
  delay(w+50);
tone(9,b,z);
  delay(z+50);
tone(9,c,z);
  delay(z+50);
tone(9,b,z);
  delay(z+50);
tone(9,a,x);
  delay(x+50);
tone(9,c,z);
  delay(z+50);
tone(9,c,z);
  delay(z+50);
tone(9,c,z);
  delay(z+50);
tone(9,c,z);
  delay(z+50);
tone(9,b,z);
  delay(z+50);
tone(9,a,z);
  delay(z+50);
tone(9,b,z);
  delay(z+50);
tone(9,g,z);
  delay(z+50);
tone(9,e,x);
  delay(x+50);
tone(9,d,z);
  delay(z+50);
tone(9,d,w);
  delay(w+50);
tone(9,d,z);
  delay(z+50);
tone(9,d,z);
  delay(z+50);
tone(9,c,w);
  delay(w+50);
tone(9,a,z);
  delay(z+50);
tone(9,c,z);
  delay(z+50);
tone(9,b,z);
  delay(z+50);
tone(9,a,z);
  delay(z+50);
tone(9,a,w);
  delay(w+50);
tone(9,b,z);
  delay(z+50);
tone(9,c,w);
  delay(w+50);
tone(9,c,w);
  delay(w+50);
tone(9,c,w);
  delay(w+50);
tone(9,c,z);
  delay(z+50);
tone(9,c,z);
  delay(z+50);
tone(9,c,w);
  delay(w+50);
tone(9,c,w);
  delay(w+50);
tone(9,d,w);
  delay(w+50);
tone(9,c,w);
  delay(w+50);
tone(9,d,w);
  delay(w+50);
tone(9,c,z);
  delay(z+50);
tone(9,b,z);
  delay(z+50);
tone(9,b,w);
  delay(w+50);
tone(9,a,z);
  delay(z+50);
tone(9,g,w);
  delay(w+50);
tone(9,a,w);
  delay(w+50);
tone(9,b,w);
  delay(w+50);
tone(9,c,z);
  delay(z+50);
tone(9,a,x);
  delay(x+50);
tone(9,c,z);
  delay(z+50);
tone(9,c,w);
  delay(w+50);
tone(9,c,z);
  delay(z+50);
tone(9,c,z);
  delay(z+50);
tone(9,c,w);
  delay(w+50);
tone(9,c,z);
  delay(z+50);
```


