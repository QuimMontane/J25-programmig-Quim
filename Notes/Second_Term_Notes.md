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
## Loop "for"
---

```c++
For(“definition of variables”;”condition of iteration”;”step”){code}
```

**Example of a loop "for":** 

 ```c++
 For(“definition of variables”;”condition of iteration”;”step”){codigo a repetir} 
```

---
## C++ --> Syntaxis
---

**to call a function:**

```c++
nameOfFunction (values of parameters if necessary, );
```

**Return type function:**

```c++
nameOfFunction ( [type] parameter if necessaery, _){code...}
```
 
---
## Modulus (reminder) 
---

```c++
7/3=2,333333… 

7-->2 integer quotient//1 reminder (division) 
```

In **programming:** 

```c++
7/3=2  
```

If we are using **integers**:

```c++
7%3=1 --> modulus operator 
```

Ex. 

```c++
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


---
# Arrays
---

---
## Definition:
---

Variables that store several values in a specific order and don’t change un size, they also have very fast access, and the size of the array is relatively small.


---
## Important Concepts:
---

- **Collection of elements**: Arrays in C++ are collections of elements of the same data type stored in contiguous memory locations.
- **Index and value**: An element of an array will always have an index between 0 and n-1 being n: the length of the array.
- **Lenght**: Size of an array; number of elements.
- **Fixed size**: Once declared, the size of an array cannot be changed during runtime.
- **Indexing**: Elements in an array are accessed using an index, starting from 0 for the first element.
- **Declaration**: Arrays are declared using square brackets [] after the data type, specifying the size of the array.
- **Memory management**: Memory for arrays is allocated statically or dynamically depending on how they are declared.
- **Iteration**: Loops are commonly used to iterate through array elements for processing or manipulation.


---
## Arrays using Int
---

**Arrays with int slow form**

```C++
int[] grades=(5, 7, 9, 7, 6, 8}
int sum = 0;
sum = sum + grades [0];
sum = sum + grades [1];
sum = sum + grades [2];
sum = sum + grades [3];
sum = sum + grades [4];
sum = sum + grades [5] ;
int average = sum/6;
Serial.println(average);
```

**Arrays with int faster version using a loop**

```C++
int [] grades={5, 7, 9, 7, 6, 8}
int sum = 0;
  for (int n=0-;n<6;n++ ) {
    sum = sum + grades [n];
  }
int average = sum/6;
Serial.println(average);
```

---
## Arrays using Int for real life examples
---

**Best grade**

```C++
void setup(){
Serial.begin(9600); 
int[]grades=(5, 7, 9, 7, 6, 8)
int max = grades [0];
   for (int i=1; i<6;i++) {
      if (grades [i]>max) {
      max = grades [i];
      }
  }
Serial.println(max);
}

```

**Worst grade**

```C++
void setup(){ 
Serial.begin(9600); 
int grades [] = {9,5,8,3,2,9,3,1,7}; 
int min = grades[0]; 
   for (int i = 1; i < 9; i++) { 
      if (grades[i] < min) { 
      min = grades[i]; 
      } 
  } 
Serial.println(min); 
} 
```







