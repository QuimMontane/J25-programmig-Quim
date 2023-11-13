---
# EXPLANATIONS:
---

# Explanations of Blink_Variations: 

**Blink_Variation_01**: Turns an LED on for one second, then off for one second, repeatedly.

**Blink_Variation_02**: The same as in Variation 1, but there's more blinks and they blink much faster.

**Blink_Variation_03**: Writes the name QUIM in morse code.

**Blink_Variation_03-Faster**: The same as in variation 3, but every time that it loops, it goes faster.

[code](https://github.com/QuimMontane/J25-programmig-Quim/blob/main/Arduino/Blink_Explanation)


---
# Explanations of CookingSystems: 
---

**CookingSystem_1:** this program works with serial, there's a readString and it makes that if you write "cook" the program will 
automatically write "has escrito: cook" and later will write in two different lines "we are deciding" and "we are cooking"


**CookingSystem_2:** this program is similar as the one before, but there's a recipee, a spanish omelette. Firstly, you will need to 
write "potato" and the program will automaticaly give you a potato, so now you can do the recipee. Secondly, you will write "cook" and 
the program will automaticaly write "has escrito: cook" and after it will write "we are deciding", the program will check if there's all 
the necessary things to make the spanish omelette, and if there are, it will write" we are cooking" and "you have a Spanish Omelette"


**CookingSystem_2_My_Own_Recipee:** this program is the same as the one before, but instead of a spanish omelette, is a sushi roll. 
So firtly, you will write "noriSeaweed" and you will automaticaly get a noriSeaweed, later you will write "salmon", and you will also get 
a salmon. Secondly, you will write "cook" and the program will write "you have written: cook", later it will write "we are deciding" 
and will check if there's everything to make the sushi roll, if there is, the program will write "we are making sushi" and "you have 
sushi".

**CookingSystem_4:** The program monitors the quantities of these ingredients and checks whether there are enough to prepare a salad.
New global variables (lettuce, tomato, cucumber, oliveOil, and salt) are introduced to keep track of salad ingredients.
Then if the input is "tomate," it increments the tomate count and the same goes to every other ingredient.
The decide function checks the input string. If it's "cook," it calls the cook function. If the input is "prepare" it calls the 
prepareSalad function. And substracts the ingredients that have been used. The "show" option in the input is added to display the current 
quantities of all ingredients.

[code](https://github.com/QuimMontane/J25-programmig-Quim/blob/main/Arduino/CookingSystem_Explanation)

---
# Explanations of FunctionalProgramms:
---

**FunctionalProgramming_1:** Writes the name "QUIM" in morse code, the code is very extended, the loop is very large.

**FunctionalProgramming_2:** Basically is the same as the one before, but the loop is very short, because every thing is out the loop. 

**OptionalFunctionalprogramming_3:** is the same as FunctionalProgramming_2, but works with the numbre of dots and slashes, 
bascilally, you put the number of dots or slashes each letter have, and the program will automaticaly do "NumberOfDots*dotDuration", 
and with the delay works almost the same, you put "delay(dotDuration*(the number of spaces you want))".

**FunctionalProgramming_5:** Is the same as the FunctionalProgramming_2, but is with serial.

[code](https://github.com/QuimMontane/J25-programmig-Quim/blob/main/Arduino/Functionalprogramming_Explanations)

---
# Explanation of MySpecialMessage:
---

**MySpecialFunction**: This program works with serial, draws line by line a drawing of Fredy from Five Nights at Freddy's, there's 10 
"\n" to clear the serial monitor.

[code](https://github.com/QuimMontane/J25-programmig-Quim/blob/main/Arduino/MySpecialMessage_Explanation)
