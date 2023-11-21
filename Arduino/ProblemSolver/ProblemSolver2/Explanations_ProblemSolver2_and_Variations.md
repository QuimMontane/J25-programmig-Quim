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
