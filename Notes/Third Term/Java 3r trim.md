---
# JAVA 3r TRIM
---

## What is an object? 

An object is an abstract entity that describes the data this entity has (propierties, varialbes, attributes) and the actions this entity can perform (methods, functions). 

- Name 
- Attributes (characteristics) 
- Actions (functions/subprograms/methods) 

## Differences between attribute/parameter/local variable: 

When we instantiate an object (create a vehicle or a goomba) we usually are going to initialize the variables (attributes) that are inside the object that will be in memory 
for the life of the object. 

When we have a local variable the life of that variable is only the local block (usually a method) where is executed. We don't have access to it afterwards. 

Parameters are variables that are inputted into methods. 

**Modularity:** Modularity in Java refers to the ability to organize code into separate, self-contained units for easier maintenance and scalability. 

An **example** could be the Lego bricks: 

![image](https://github.com/QuimMontane/J25-programmig-Quim/assets/144990948/0c2ecccc-afcf-42cf-bbea-9d8591f839ec)


**Encapsulation:**
One way to achieve the best modularity is by restricting the access to methods or variables that are in objects so only the objects themselves are in charge of changing 
those values or interact with them. 

**URL:** Only admit characters from the English alphabet, it doesn’t accept “ç, ñ, ó…” 

**Access modifiers** 

We are going to work mainly with 2 

- private: Only the class itself can access to it 
- public: Every part of the code can access to it. 

Here you have more information: 

![image](https://github.com/QuimMontane/J25-programmig-Quim/assets/144990948/23ec3d65-f2f9-4b3a-87e0-3801a589c67c)


**Instanciation:**  

The concept of instanciation is how we have "**blueprints**" and "**instances**". Each of the instances has or may have different attributes. 

So for creating these instances we need to instanciate them as a variable with the object type. In this case for example. 

``` java
Circle circle1 = new Circle ();
```

**Circle:** is the Object type that we have access to (Circle.java) 
**Circle1:** is the identifier of that object 
**new:** is the keyword to call constructors 
**Circle():** is a special method of the class Circle called constructor that is going to be executed when we create this instance. 

**Implicit:** Something that's done for you by other code behind the scenes. In short terms not done directly. 

**Explicit:** Done by the programmer. 


**Example** for explaining instances (car) 

We may have the object Vehicle that has the attributes such as color, model, year and so on and then the different instances that will be 
specific vehicles that are a Volvo, a Mercedes, a Dacia or a Toyota 

Pregunta de examen/definiciones: 

**Static method/variable:**  
- variable que esta definida en el mapita de la clase, siemre va estar en meoria y solo tendremos 1 que se comparte entre todos los elementos. 
- Hay **dos tipos:**  
    - **Final** – constants variables 
    - **No** constants variables 

**Dynamic:** Lo contrario (dependiendo de las instancias) 

**Constructor:** Metodo al que llamamos cuando queremos una instancia, no tiene porque ser una variable. 

**Getter:** Devuelve valores almacenados de la variable/objeto. 

**Setter:** Cambia valor almacenado de la variable/objeto. 

**Final:** El valor de la variable no se va a cambiar dentro del programa. 

**The typical object in Java:** 

![image](https://github.com/QuimMontane/J25-programmig-Quim/assets/144990948/6aa1fb5f-80cf-472c-95f0-718abc8524f6)


## Class Object made in class: 

**Examples** of **getters** and **setters**: 

![image](https://github.com/QuimMontane/J25-programmig-Quim/assets/144990948/0d849a58-8c98-4eda-9691-b95fee832833)


public void smallerSide(int smallerSide) 

SetSmallerSide: Method 

int smallerSide: Parameters 

 

this.smallerSide = smallerSide; 

This.smallerSide: variable de la clase 

SmallerSide: parameter 




**Example of a constructor:** 

![image](https://github.com/QuimMontane/J25-programmig-Quim/assets/144990948/cd51d4de-d4a3-4ae5-96eb-b990056d7e16)



**Ejercicio de Java:** 

Book:  

Book book = newBook (“Don Quijote, “Miguel de Cervantes”, “680”, “89......78” (ISBN), “False”) 

![image](https://github.com/QuimMontane/J25-programmig-Quim/assets/144990948/4669b4b1-f89c-43ae-a8ad-810304b8cf80)





Potato potato1 = new Potato () 
- Potato (Clase) 
- potato 1 (Nombre) 
- New (palabra clabe para construir) 
- Potato () (constructor) 


## Contexto de modelado  

Coches (Un concesionario, juegos de coches) 

 

**Book:** 

Context of **library** 

    String: title 

    String: author 

    String: ISBN 

    String: gender 

    boolean: landed 

    Lending []: lendingHistory 

    Library: location 

 

Context of **bookstore** 

    String: title 

    String: author 

    String: ISBN 

    String: gender 

    double: price 
  
    boolean: promotion 

    String: section 

 

Context of **Minecraft** 

    Point: position //Point ia a class to store a position X, Y, Z and 				posibly rotation.  

    String: title 

    String: context 

    minecraftUser: author 

    int: pages 

 

 

 

 

 

Context of **Car**: 

    double: price 

    boolean: promotion 

    String: brand 

    boolean: secondhand 

    String []: extras 

    String []: category 

    int: power // (HP) 

    string: color 
    
 

Car workshop 

    string: Plate 

    client: Owner 

    String: problems 

    String: brand 

    String: model 

    String: dateOfArrival 

 

Car in GTA 

    String: Plate 

    String: model 

    String: Place 

    int: spawnRate 

    long: value 

    int: healthPoints 



El objetivo de **OPP** es tener un código más ordenado y que sea más fácil de leer. 

Se suele usar el **OPP** para reutilizar el código más adelante y reutilizar. 

**Modularidad:**  
- ejemplo: dividir el código en dos cajas 

**Encapsulación:**  
- Por ejemplo; Cuanta Bancaria, tenemos una variable Saldo, la cual solo podemos cambiar usando un método. 
- (Limitar el acceso a variables y métodos)


Modularity and encapsulation are things that help us reutilize the code and colaborate with other people. 

Java y C++ tienen más encapsulación que JavaScript, Python 

![image](https://github.com/QuimMontane/J25-programmig-Quim/assets/144990948/4c735db1-6b6f-4259-90d1-9547c19f87cf)



**Variable Tipado:** Son botones los cuales por ejemplo en un numero tenemos una función determinada para ese tipo de número. Y cuando le damos a ese boto, realiza la función sin tener que escribirla. (Caja Registradora) 

**Explícito:** Sí que esta (está escrito y se ve) 

**Implícito:** Elidido, está dentro el código, pero no escrito, no se puede ver (no está escrito) 

**Byte:** Números del 0 al 255. 


## Tipos de composición:
**Dependencia** (dependency)
- Clase A usa B
    - La clase A utiliza algún método (normalmente estático) de B
    - Math.random() 

**Agregación** (aggregation) 
- Clase A tiene B
    - La clase B es instanciado y forma parte de los datos de A 

**Herencia** (inheritance) 
- Clase A es B 
    - La clase A hereda **todo**  
    - La clase B puede usar métodos **privados** 

**Multiplicidades:** When we have objects that aggregate between each other we can have different numbers of “How many objects in A has a B” the short table is this: 

![image](https://github.com/QuimMontane/J25-programmig-Quim/assets/144990948/03378881-e9cf-4c12-aa44-fa388ab256fe)
![image](https://github.com/QuimMontane/J25-programmig-Quim/assets/144990948/2f014de7-022e-4b65-baff-2f8f2706247a)


**Inheritance:** Also called in java “extension” because we use “class A extrends B” 

![image](https://github.com/QuimMontane/J25-programmig-Quim/assets/144990948/9a319564-052d-4e7a-b8ff-64013f6bcd03)


Example of 1-1 in Spanish ID (DNI). In this case a person can only have one DNI (ID) and an ID can only have one owner.  

 

Setter = Mutators 

Getter = Accesors 
