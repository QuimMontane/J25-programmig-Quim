In Spain, the Documento Nacional de Identidad (DNI) is the national identity card that serves as an official identification document for Spanish citizens. The DNI number is a unique identifier assigned to each individual, and it consists of both numbers and a letter. Understanding the logic behind the DNI number and letter can help in validating its authenticity.

## DNI Structure:

**DNI Number (Numeric Part):**

The DNI number is a sequence of eight digits.
It typically starts with a leading zero, and the first digit indicates the province where the DNI was issued.
The following seven digits are unique to each individual.

**DNI Letter:**

The ninth character in the DNI is a letter.

The letter is a checksum or control character, and it is calculated based on the numeric part of the DNI.

The algorithm used to calculate the letter involves dividing the numeric part of the DNI by 23 and taking the remainder. 
The result corresponds to a specific letter in the following mapping:


![tablaaaa](https://github.com/QuimMontane/J25-programmig-Quim/assets/144990948/7004f81d-16ce-4e02-beb6-38b4062cb83e)


## Validating a DNI:

To validate a DNI, you can follow these steps:

**Check the Length:**

Ensure that the DNI number has eight digits and the letter, making it a nine-character sequence.

**Check the Leading Zero:**

Confirm that the DNI number starts with a leading zero.

**Verify the Letter:**

Use the algorithm described above to calculate the letter based on the numeric part of the DNI.
Compare the calculated letter with the one provided in the DNI. If they match, the DNI is likely valid.

**Example:**

Let's take an example DNI: 01234567-X

**Numeric Part:**

The numeric part is 01234567.

**Letter Calculation:**

01234567
m
o
d
 
 
23
=
18
01234567mod23=18
The corresponding letter is Q.

**Validation:**

The provided letter is X, not Q, so this DNI is invalid.
Understanding the structure and logic behind the DNI number and letter allows you to perform basic validation checks to ensure the integrity of the identification document.
