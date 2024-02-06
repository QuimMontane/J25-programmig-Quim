---
# SECOND TERM NOTES
---

---
## VOCABULARY📚
---
- Pseudorandom: A pseudo-random number is a value produced through a procedure that seems to yield random results, yet it does not truly achieve randomness; rather, they 
  are produced in a consecutive manner using a deterministic algorithm.
- Pseudocode: It's a depiction of algorithmic steps that blends elements of programming language conventions with informal, often intuitive, representations of actions and 
  conditions.
- Parameter: It's a distinctive type of variable utilized within a function to point to one of the data elements supplied as input to the function.
- Array: It's an aggregate of elements or information stored in adjacent memory spaces, also recognized as database systems.
- Iteration: Reiterate concepts, albeit always presented in varied manners.
- Implementation: It's the embodiment of a technical specification or algorithm into a program, software module, or another computer system via computer programming and 
  deployment.
- Extract a method: It involves isolating intricate code segments from a particular location and converting them into separate functions to simplify their complexity.


---
## Loops and iterations 
---

A loop or iteration is a control mechanism that permits a sequence of instructions to be executed multiple times. It empowers you to repeatedly execute a block of code until a specific condition is satisfied.
**Name of variables to call a function**: Parameter, has to be a number

```c++
do while (eggs > 0){    //condition
  takeEgg();
  breakEgg();
  throwGarbage();
}
```

**Example of an infinite loop:**

```c++
do while (true) {
  climbMountainWithBoulder();
  seeHowTheBoulderFalls();    //infinite loop
  goBackToTheBottomOfTheMountain();
}
```

---
## C++ --> Syntaxis
---

```while (notConnected){

    tryToConnect();               //example of what Discord might do
}

if (!notConnected){

  loadMessages();
}

int numero = 0;

int suma = 0;

while (numero<200){

     numero = numero + 2;
     
     suma = suma + numero;
}

Serial.println(suma)
```


**to call a function:**
nameOfFunction (values of parameters if necessary, );

**Return type function:**
nameOfFunction ( [type] parameter if necessaery, _){code...}

**Array** (search definition)


Syntaxis bucle “**for**”: 

For(“definition of variables”;”condition of iteration”;”step”){codigo a repetir} 

 
---
## Modulus (reminder) 
---
```
7/3=2,333333… 

7-->2 integer quotient//1 reminder (division) 
```

In programming: 
```
7/3=2  
```
If we are using integers 
```
7%3=1 --> modulus operator 
```
Ex. 
```
6/3=2 

6%3=0 
```

---
# Strings🕹
---


## Introduction

In coding, a string denotes a series of characters. It serves as a basic data type employed to portray textual information. Strings are frequently altered for purposes
like input/output, textual analysis, and storing data.


## Declaration and Initialization
```C++
// Declaration and initialization of strings
std::string greeting = "Hello, ";
std::string name = "World!";
```

## Important functions supported by String class
- append(): This function concatenates a segment of a string onto another string.
- assign(): This function allocates a segment of the string.
- at(): This function obtains the character stored at a specified location.
- begin(): This function returns a reference to the start of the string.
- capacity(): This function gives the total element that can be stored.
- compare(): This function compares a string against the invoking string.
- empty(): This function returns true if the string is empty.
- end(): This function returns a reference to the end of the string.
- erase(): This function removes characters as specified.
- find(): This function searches for the occurrence of a specified substring.
- length(): It gives the size of a string or the number of elements of a string.
- swap(): This function swaps the given string with the invoking one.

  
## Important Constructors
- String(): This constructor is used for creating an empty string.
- String(const char *str): This constructor is used for creating string objects from a null-terminated string.
- String(const string *str): This constructor is used for creating a string object from another string object.

  
## Concatenation
Strings can be combined using the + operator, a process known as concatenation.
```C++
std::string message = greeting + name; // Results in "Hello, World!"
```

## String Length
The length of a string can be obtained using the length() or size() member functions.
```C++
int length = message.length(); // Length is 13
```

## Substrings
Portions of a string can be extracted using the substr() function.
```C++
std::string sub = message.substr(7, 5); // Extracts "World"
```

## String Comparison
Strings can be compared using relational operators (==, !=, <, >, <=, >=).
```C++
bool isEqual = (greeting == name); // Evaluates to false
```

## String Manipulation
Various functions are available for manipulating strings, such as finding substrings, replacing characters, and converting case.
```C++
// Example: Converting to uppercase
std::transform(message.begin(), message.end(), message.begin(), ::toupper);
```









