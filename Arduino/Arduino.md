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
