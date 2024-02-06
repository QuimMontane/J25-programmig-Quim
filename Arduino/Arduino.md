---
# EXPLANATIONS c++:
---

---
# Explanations of Blink_Variations: 
---

**Blink_Variation_01**: The setup function initializes the LED pin, sets it as an output, and then performs the specified sequence of turning the LED on and off with specific delays. 
The loop function creates an infinite loop that blinks the LED with the specified timing pattern.

**Blink_Variation_02**: This sequence repeats indefinitely, creating a blinking effect where the LED is turned on for a short period, then off for the same duration. The result is a 
visually perceptible blinking pattern due to the alternating states of the LED.

**Blink_Variation_03**: This C++ code uses the Arduino framework to represent the Morse code for the word "QUIM" by flashing the built-in LED on pin 13 with dots, dashes, and pauses. 
After spelling "QUIM," the durations of dots, dashes, and pauses are halved to speed up the Morse code transmission, and the loop continues.

**Blink_Variation_03-Faster**: This program represents the Morse code for "QUIM" using the built-in LED, and after spelling the word, it speeds up the transmission by halving the 
durations of dots, dashes, and pauses. The loop continuously repeats this pattern.

[code](https://github.com/QuimMontane/J25-programmig-Quim/blob/main/Arduino/Blink/Blink_Explanation.md)


---
# Explanations of CookingSystems: 
---

**CookingSystem_1:** This program continuously listens for input through the serial port. When it receives a non-empty string, it prints the string, trims any whitespace, and then 
decides what action to take based on the input. In this case, if the input is "cook," it calls the **cook** function, which prints "we are cooking" to the serial monitor.

**CookingSystem_2:** This program allows a user to interactively input commands through the serial monitor. If the user inputs "cook," it checks if there are enough ingredients to make 
a Spanish Omelette and updates the quantities accordingly. If the user inputs "potato," it increments the count of potatoes. The program continuously runs in a loop, waiting for user 
input.

**CookingSystem_2_My_Own_Recipee:** This program allows a user to interactively input commands through the serial monitor to simulate making sushi. If the user inputs "cook," it checks 
if there are enough ingredients to make sushi and updates the quantities accordingly. If the user inputs specific ingredients like "rice," "noriSeaweed," "salmon," or "soy," it 
increments the corresponding counts. The program continuously runs in a loop, waiting for user input.

**CookingSystem_4:** This program allows a user to interactively input commands through the serial monitor to simulate making pizza and preparing salad. The program keeps track 
of the quantities of various ingredients and performs actions based on user commands. The **showIngredients** function allows the user to check the current inventory of ingredients. The 
program continuously runs in a loop, waiting for user input.

[code](https://github.com/QuimMontane/J25-programmig-Quim/blob/main/Arduino/Cooking_System/CookingSystem_Explanation.md)


---
# Explanations of FunctionalProgramms:
---

**FunctionalProgramming_1:** This program uses the built-in LED to transmit Morse code for the word "QUIM" in a loop. The Morse code for each letter is represented by a sequence of dots 
and dashes, with appropriate delays between them. The **dotDuration** variable determines the duration of a Morse code dot, and the LED blinks accordingly. The loop repeats, continually 
transmitting the Morse code pattern for the specified word.

**FunctionalProgramming_2:** (similar to the one before) This program uses Morse code to transmit the word "QUIM" using the built-in LED on the Arduino. The Morse code for each letter 
is represented by a sequence of dots and dashes, with appropriate delays between them. The **dotDuration** variable determines the duration of a Morse code dot, and the LED blinks 
accordingly. The loop repeats, continually transmitting the Morse code pattern for the specified word.

**OptionalFunctionalprogramming_3:** (similar to the one before) This program uses functions to transmit Morse code for the word "QUIM" using a modular approach. The **morseBlink** 
function is responsible for controlling the blinking pattern based on the number of dots specified for each letter. The **dotDuration** variable determines the duration of a Morse code 
dot, and the LED blinks accordingly. The loop repeats, continually transmitting the Morse code pattern for the specified word.

**FunctionalProgramming_5:** (similar to the one before, but using Serial) This program uses the Serial Monitor to display Morse code for the word "QUIM." Each letter is represented by 
dots and dashes, and a forward slash ("/") is printed at the end of each letter. After printing the Morse code for all the letters, there is a delay of 1000 milliseconds before the loop 
repeats.

[code](https://github.com/QuimMontane/J25-programmig-Quim/blob/main/Arduino/FunctionalProgramming/Functionalprogramming_Explanations.md)

---
# Explanation of MySpecialMessage:
---

**MySpecialFunction**: This program works with serial, and the objective is to print the characters line by line until creating a 2D drawing. In my case, I wanted to draw a Freddy from 
Five Nights at Freddy's. It then includes a delay of 1000 milliseconds (1 second) to allow you to read the message before it is printed again in the next iteration of the loop. The 
repeated printing of newlines (\n) at the end serves to clear the Serial Monitor for better readability.

[code](https://github.com/QuimMontane/J25-programmig-Quim/blob/main/Arduino/MySpecialMessage/MySpecialMessage_Explanation.md)


---
# Explanation of HomeworkDefiningAFunction:
---

These are exercices for homework, they were to practice for the examen we were going to have next week, and our teacher saw that we didn't make a very great job defining functions, so firstly he explained how to do some excericies with examples, and then he provided some exercices for us. So in this exercices we had to define the functons by the explanation we were given.

[code](https://github.com/QuimMontane/J25-programmig-Quim/blob/main/Arduino/HomeworkDefiningAFunction/Explanation.md)


---
# EXPLANATIONS of ARRAYS:
---

**Explanation of Array 1:**
This program defines two functions, **swapFirstTwoLetters** and **swapAandI**, which respectively swap the first two letters and 'a' with 'i' in a given string. 
In the **loop** function, it initializes a string variable **word** with the value "webi wabo", calls the two swap functions on it, and prints the modified 
string via Serial communication. This process repeats every second due to the delay(1000) statement in the loop.


**Explanation of Array 2:**
This program initializes an array **grades** with 9 integer values representing grades. 
It then finds the minimum grade in the array using a **for** loop and prints the index of each occurrence where a grade is smaller than the current minimum. 
Finally, it prints the minimum grade found.

[code](https://github.com/QuimMontane/J25-programmig-Quim/blob/main/Arduino/Arrays/Explanations.md)


---
# Explanation of ProblemSolver1
---

When the Arduino is powered up or reset, it will enter the **setup** function, initialize serial communication, 
and then enter a loop that solves 30 problems by calling the **resolverProblemaDibujo** function for each problem, 
printing a corresponding message to the serial monitor. The **loop** function, although defined, is empty in this code.

[code](https://github.com/QuimMontane/J25-programmig-Quim/blob/main/Arduino/ProblemSolver/ProblemSolver1/Explanation_ProblemSolver1.md)


---
# Explanations ProblemSolver 2 and variations
---

## ProblemSolver2

When the Arduino is powered up or reset, it will enter the setup function, initialize serial communication, 
print a message to the serial monitor, and then enter a loop that solves 15 odd-numbered problems by calling the 
resolverProblemaDibujo function for each odd-numbered problem, printing a corresponding message to the serial monitor. 
The loop function, although defined, is empty in this code.


## ProblemSolver2_ejemplo_1

When the Arduino is powered up or reset, it will enter the setup function, initialize serial communication, 
print a message to the serial monitor, and then enter a loop that solves 30 problems in reverse order (from 30 to 1) 
by calling the resolverProblemaDibujo function for each problem, printing a corresponding message to the serial monitor. The loop function, 
although defined, is empty in this code.


## ProblemSolver2_ejemplo_2

The program prints messages for solving problems from 1 to 30, excluding the problem with the number 17. 
The first loop uses a simple conditional check, while the second loop uses an if statement to skip the problem with the number 17.


## ProblemSolver2_ejemplo_3

The program prints messages for solving problems from 1 to 30, excluding the problems with the numbers 17 and 23. 
It demonstrates two different ways of achieving the same result: one using a simple if statement inside a loop, a
nd the other using a single if statement outside the loop.


## ProblemSolver2_ejemplo_4

The program prints messages for solving problems from 1 to 30, but only for the problems that are odd and divisible by 3. 
The conditions inside the loop (**n % 2 == 1** and **n % 3 == 0**) ensure that only numbers meeting these criteria trigger the call to the resolverProblemaDibujo function.


## ProblemSolver2_ejemplo_5

the program prints messages for solving problems from 1 to 30, but only for the problems that are odd (**n % 2 == 1**) 
and divisible by 3 (**n % 3 == 0**). The conditions inside the loop ensure that only numbers meeting these criteria trigger the call to the **resolverProblemaDibujo** function, 
which then prints a message to the serial monitor.

[code](https://github.com/QuimMontane/J25-programmig-Quim/blob/main/Arduino/ProblemSolver/ProblemSolver2/Explanations_ProblemSolver2/Explanations_ProblemSolver2_and_Variations.md)


---
# Explanations of ProblemSolver 3 and variations
---


## Explanation of ProblemSolver_3

the program prints messages for solving problems from 1 to 100 but only for the problems that are divisible by both 4 and 6. 
The conditions inside the loop (n % 4 == 0 && n % 6 == 0) ensure that only numbers meeting these criteria trigger the call to the 
resolverProblemaDibujo function, which then prints a message to the serial monitor.


## Explanation of ProblemSolver_3_ejemplo_1

The program prints messages for solving problems from 1 to 100 but only for the problems that are multiples of 7 and not multiples of 14. The conditions inside the loop (**n % 7 == 0 && 
 n % 14 != 0**) ensure that only numbers meeting these criteria trigger the call to the **resolverProblemaDibujo** function, which then prints a message to the serial monitor.


## Explanation of ProblemSolver_3_ejemplo_2

The program prints messages for solving problems from 1 to 100 but only for the problems that are odd, divisible by 3, and prime. The conditions inside the loop and the helper function 
 **esPrimo** ensure that only numbers meeting these criteria trigger the call to the **resolverProblemaDibujo** function, which then prints a message to the serial monitor.

 
## Explanation of ProblemSolver_3_ejemplo_3

The program prints messages for solving problems from 1 to 30 but only for the problems that are multiples of 7. The condition inside the loop (**n % 7 == 0**) ensures that only numbers 
meeting this criteria trigger the call to the **resolverProblemaDibujo** function, which then prints a message to the serial monitor.


## Explanation of ProblemSolver_3_ejemplo_4

The program prints messages for solving problems from 1 to 30 but only for the problems where the last digit is either 3 or 6. The condition inside the loop (**n % 10 == 3 || n % 10 == 
6**) ensures that only numbers meeting this criteria trigger the call to the **resolverProblemaDibujo** function, which then prints a message to the serial monitor.


## Explanation of ProblemSolver_3_ejemplo_5

the program prints messages for solving problems from 1 to 30 but only for the problems that are odd, divisible by 3, and have a sum of digits that is even. The conditions inside the 
loop and the helper function **sumOfDigitsIsEven** ensure that only numbers meeting these criteria trigger the call to the **resolverProblemaDibujo** function, which then prints a 
message to the serial monitor.


## Explanation of ProblemSolver3_ejemplo_6_ExtraPoints
the program prints messages for solving problems from 1 to 30 but only for the problems that are odd, divisible by 3, and have a sum of digits that is even. The conditions inside the 
loop and the helper function **sumOfDigitsIsEven** ensure that only numbers meeting these criteria trigger the call to the **resolverProblemaDibujo** function, which then prints a message to 
the serial monitor.

[code](https://github.com/QuimMontane/J25-programmig-Quim/blob/main/Arduino/ProblemSolver/ProblemSolver3/Explanations_ProblemSolver_3_and_Variations/Explanations_ProblemSolver_3_and_Variations.md)


---
# ProblemSolver4 a, b, c Explanations:
---


## ProblemSolver4 a Explanation:

The program prints messages for solving problems from 1 to 100 but only for the problems where the digit '3' is present. 
The condition inside the loop (**if (hasDigitThree(n))**) ensures that only numbers meeting this criteria trigger the call to the resolverProblemaDibujo function, 
which then prints a message to the serial monitor.


## ProblemSolver4 b Explanation: 

The program prints messages for solving problems from 1 to 100 but only for the problems that are either odd or multiples of 6. The conditions inside the loop and the helper functions 
**isOdd** and **isMultipleOfSix** ensure that only numbers meeting these criteria trigger the call to the **resolverProblemaDibujo** function, which then prints a message to the serial 
monitor.


## ProblemSolver4 c Explanation:

 The program prints messages for solving problems from 1 to 100 but only for the problems where the digit sum is either 10 or 5. The condition inside the loop and the helper function 
 **digitSumIs** ensure that only numbers meeting these criteria trigger the call to the **resolverProblemaDibujo** function, which then prints a message to the serial monitor.

[code](https://github.com/QuimMontane/J25-programmig-Quim/blob/main/Arduino/ProblemSolver/ProblemSolver4/ProblemSolver4_a_b_c_Explanations.md)


---
EXPLANATIONS of SONAR 1,2,3,4
---

**Sonar1:** The purpose of this code is to iterate over an array of depth measurements (**depths**) and count how many times the depth has increased. 
The result is stored in the variable **increasedDepth**. The loop runs from the second element to the last element of the array, checking if each depth is greater than the previous one. 
The final count of increased depths is stored in the **increasedDepth** variable.


**Sonar2:** This code analyzes a sequence of depth measurements stored in the array depths and counts how many times the **depth** has increased, decreased, or remained unchanged. 
The results are then printed to the serial monitor. The **loop()** function is empty as there is no continuous logic to be executed repeatedly.


**Sonar3:** This code analyzes an array of depth measurements (**depths**), calculates and stores the speeds corresponding to changes in depth, 
and then prints the counts of depth changes and the corresponding speeds through the serial communication interface. 
The counts include how many times the depth has increased, decreased, or remained unchanged. The speeds are calculated based on the differences between consecutive depth measurements.


**Sonar4:** The code analyzes a sequence of depth measurements, calculates the speed of change between consecutive measurements, and provides statistics on the changes, 
including counts of increases, decreases, and unchanged values. Additionally, it calculates and prints the minimum, maximum, and average speeds. 
The **loop()** function is empty as there is no continuous logic to be executed repeatedly. The entire logic is performed in the **setup()** function, 
which is executed once at the start of the program.

[code](https://github.com/QuimMontane/J25-programmig-Quim/blob/main/Arduino/Sonar/EXPLANATIONS_SONAR_1,2,3,4.md)    


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

[code](https://github.com/QuimMontane/J25-programmig-Quim/blob/main/Arduino/Song/Song%202/Song2_Doumentaci%C3%B3n_del_Proceso.md)


---
# EXPLICACIÓN Wrap-Up_Project
---

Este proyecto era el proyecto final para c++, as que teniamos que juntar todos nuestros conocimientos que hemos adquirido durante nuestro aprendizaje 
en este lenguaje de programación, asi que la tarea era hacer esto:

```
Document the process (link to the repo) and upload the code (zip) of the wrap up project


It's a project that reads the Serial and outputs different results depending on the Strings that you send

Mandatory features:
- Echo when you write something through serial is going to reply the same command just to be sure that the command has been sent properly. 
-write a line in morse code if you write "m: " or "morse " for the command and the line after will be sent as morse code. 
-if the command is correct send a cooking recipee of the dish of your choice. 
-play (or stop) a song

The point of all of this is the integration of the different parts.
```

Asi que teniamos que juntar el **cook** que ya hicimos hace tiempo, el **song** que ya hicimos anteriormente, el **morse** que era una de las primeras cosas que hicimos 
junto al **decide**.
Nuestro profesor nos ayudó bastante, la primera parte nos la hizo el, porque no sabiamos como el queria que fuera el proyecto, 
asi que el nos dio la primera vista del proyecto, nos dijo que teniamos que añadir archivos al arduino, cosa que nunca hicimos anteriormente, 
asi que tuvimos que aprender a hacerlo, era muy facil, es simplemente ir a la derecha de la pantalla, donde estan los 3 puntitos, darle a archivo nuevo, y lo nombras, 
**importante** nombrarlo con un **.h** al final del titulo, sino no funcionara como queremos, esto sirbe para que te quepa todo lo que quieras poner y se vea mucho más 
limpio la página principal, pero yo tuve un problema al final de todo, porque no me acordaba que solo se podia tener un void setup y un void loop para todos los archivos, 
los cuales solamente van en la página principal, asi que yo cuando lo compilaba no veía lo que me fallaba, asi que le pedí ayuda a un compañero para ver si el sabia 
lo que me pasaba y el lo vió al final, asi que ya me funcionaba, otro problema que tuvimos todos, fué que el profesor nos pidió que sonase una cancion, 
pero que pasa si ya estas harto de la cancion y quieres pararla? pues nos dijo que hicieramos un **breake**, pero nadie supo como hacerlo, asi que 
finalmente el profesor dijo que no pasaba nada si no lo tenias, porque nadie sabia como hacerlo y el nos dijo que ahora mismo no sabia como hacerlo, 
que ya se informaria y nos intentaria ayudar, pero creo que se le olvidó y finalmente no lo contamos.

[code](https://github.com/QuimMontane/J25-programmig-Quim/blob/main/Arduino/Wrap-Up_Project/Explanation.md)







---
# EXPLICATIONS JAVA:
---

---
# EXPLICATION of OneLine:
---

This Java program calculates the sum, difference, product, quotient, and remainder of two integers, number1 and number2, and then prints out the result.

[code](https://github.com/QuimMontane/J25-programmig-Quim/blob/main/JAVA/OneLine/Explication.md)


---
# Explanation Sum_AddingAnotherNumber:
---

This Java program calculates the sum of three numbers according to a specific formula and then prints the result.

[code](https://github.com/QuimMontane/J25-programmig-Quim/blob/main/JAVA/SUM/Sum_AddingAnotherNumber/Explanation.md)


---
# Explanation of Sum_Ex_1:
---

This Java program calculates the sum of all integers from a lower bound (**LOWERBOUND**) to an upper bound (**UPPERBOUND**). 

[code](https://github.com/QuimMontane/J25-programmig-Quim/blob/main/JAVA/SUM/Sum_Ex_1/Explanation.md)


---
# Explanation of Sum_ofTwoNumbers:
---

This Java program calculates the result of an arithmetic expression and prints it to the console. 

[code](https://github.com/QuimMontane/J25-programmig-Quim/blob/main/JAVA/SUM/Sum_ofTwoNumbers/Explanation.md)


---
# Explanation of Triangle:
---

This Java program calculates the area of a triangle using the formula: area = base x height / 2
So, when you run this program, it will output the calculated area of the triangle with the given **base** and **height** values.

[code](https://github.com/QuimMontane/J25-programmig-Quim/blob/main/JAVA/Triangle/Explanation.md)
