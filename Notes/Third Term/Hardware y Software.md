---
# Hardware y Software
---

Esquema Von Neumann:

  •	Input de datos --> procesador --> output
    
    -	Procesador --> memoria

![image](https://github.com/QuimMontane/J25-programmig-Quim/assets/144990948/b7848033-53ad-4737-a6e1-c19add80e02d)


**Tipos de computadoras:**

-	Servidor

-	Portátil (laptop)

-	Torre 

-	Móvil

-	SmartWatch

-	Calculadora

-	Consolas

-	TV

-	Electrodomésticos

-	Router

Una nevera está controlada por un microcontrolador, un microcontrolador es una placa o circuito con relativamente baja capacidad de proceso.

-	Arduino

-	Dentro de un termostato

-	Lavadoras

-	Calculadoras 


**Ordenadores más complejos**

•	Por varias capas (Placas) de hardware ->  rasBerry Pi (Es un ordenador más sencillo, puede servir como servidor)

•	Varias capas de Software

**Recursos de un ordenador:**

•	Capacidades de procesado

•	Memoria (Primarias, Secundarias)

•	Ancho de banda – velocidad de comunicación

**Capacidad de procesado**

•	CPU-> Central Processing Unit

•	GPU-> Graphic Processing Unit


### Inputs y Outputs en la Informática

**Input (Entrada):**

•	Potenciómetro

•	Botón

•	Teclado

•	Sensor: 

    - Fotosensor
    
    - Sensor de temperatura
    
    - Sensores químicos

        - PH
       
        - Partículas volátiles
        
        - Humedad

•	Ratón

•	Cámara

•	Micrófono

•	Receptor capacitador

•	Giroscopio

•	Radiofrecuencia


**Output (Salida):**

•	Pantalla

•	Audio (altavoz)

•	LEDS

•	Motores:

    - Bomba
    
    - Ventilador
    
    - Vibración


**INPUT Y OUTPUT:**

•	Comunicación

    - Wifi (internet)
  
    - Bluetooth
    
    - Datos móviles (2G, 3G, 4G, 5G)
    
    - LAN (RJ45)
    
    - Teléfono / Fibra Óptica



### Apuntes Torre:

•	Fuente de alimentación

    - Potencia Max 500
        
          - Bobina
          
          - Diodo
          
          - Condensador
          
          - Disipador
          
          - Microcontrolador

•	Placa Base

    - La CPU: (Intel Core i3 3240)
    
          - Escondido en el disipador
              
              - Pasta Térmica
              
              - Ventilador
              
              - Pieza Metálica

•	Bios (Basic input output system): 

    - Tiene su pequeño disipador
    
    - Es un interfaz

•	Firmware:

    - Es un software en bebido (empotrado) en un hardware con propósito de controlar ese hardware en concreto.

•	Dos tipos de memorias

    - Primaria:
             
              - Directamente accesible (Por la CPU)
              
              - La RAM (Random access memory)
              
              - La ROM (Read only memory)

    - Secundaria
    
              - No directamente accesible
              
              - HDD-> Hard disc drive
              
              - SSD-> Solid state drive

•	Pila: 

    - Es una pequeña pila que manda energía a un componente de la placa base la cual guarda la hora en la placa base

•	Transistor:

    - Tipo de dispositivo electrónico semiconductor, capaz de modificar una señal eléctrica de salida como respuesta a una de entrada, sirviendo como amplificador, conmutador, oscilador o rectificador de la misma.

    - Si tú le das electricidad funciona, sino no.

•	RISC (Reduced instruction set computing).
    
    - This approach says that the instruction should be few and very optimized. 

    - This has the advantage of allowing easily multi-coring and set several CPU in paralel. Nowadays you can see it in microcontrollers.			

•	CISC (Complex Instruction Set Computing)

    - This category exist as an non-established antonym of RISC. Meaning "everything that is not RISC". But the main concept is that the CPU should have as many instructions posible as it can so you can use it directly.


•	**Primary memory** accesible from the CPU.

•	**Secondary memory** not directly accesible from the CPU.

There are several types of Primary memory. Mainly we have RAM (Random Access Memories) and ROM (Read Only Memories) and also we usually have "**cachés**".

•	ROM: solo puede leer instrucciones, no puede escribir.

•	CACHE: in Hardware: elements that are between the CPU and RAM, to store the elements we use most frequently.
  
  •	Hardware: elementos que están entre la CPU y la RAM, para guardar los elementos que utilizamos con mayor frecuencia.
  
  •	The Control Unit (CU)
      
      - Responsible of managing the CPU
      
      - Controls the retrieval of instructions and data from the primary memory to the CPU. What is going to be fed to the ALU (the beast)
      
      - Contains several registers, that is a small storage location that can hold data, usually multiple of 8 bit. 2 of them are
            
            - MAR
            
            - MDR


### Memory Architectures:

•	2 main architectures.

    - The first one is Von Neumann: This architecture uses 1 type of memory for instructions and data.

![image](https://github.com/QuimMontane/J25-programmig-Quim/assets/144990948/d3796da4-ee61-4709-acb1-b94a0c72acb6)

Most microprocessors of laptops use this kind of architecture.

•	The second is Harvard
   
    - It distinguishes between the memory for instructions and the memory for data.

![image](https://github.com/QuimMontane/J25-programmig-Quim/assets/144990948/f2b95d1c-cd93-4abc-915a-36f8f16ec3ec)


Three main computing resources: Computation, memory and bandwidth (ancho de vanda).

Computation: CPU

Memory: RAM 

Ancho de vanda: DISCO DURO/SSD

¿Donde esta el sistema operativo?  
  
  - En la memoria secundaria.


CLI: Command line interface
