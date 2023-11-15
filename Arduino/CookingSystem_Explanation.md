---
# Explanations of CookingSystems
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
