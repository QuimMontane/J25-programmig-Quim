---
# EXPLANATIONS:
---

# Explanations of Blink_Variations: 

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
