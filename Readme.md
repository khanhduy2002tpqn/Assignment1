## Exercise 1
### Answer
```c
short myNum = 1;
short myNum1 = 10001;
int myNum2 = 100000001;
long long myNum3 = 10000000000001;
long long myNum4 = -10000000000001;
double myDoubleNum = 1.001;
double myDoubleNum1 = 100000000000001.100001;
double myDoubleNum2 = -1000000001.100001;
char myLetter = 'A';
char myLetter1 = 'c';
char myText[] = "Hello World";
bool myBool = false;
```
Detail range of value of each type:
- short: `-32768` to `32767`
- int: `-2147483648` to `2147483647`
- long long: `-9223372036854775808` to `9223372036854775807`
- double: `1.7E +/- 308` (15 digits)
- char: `-128` to `127`
- bool: `true` or `false` (`1` or `0`)
## Exercise 2
### Topic: 
Declare two integer variables a and b and assign them with 5 and 10 and after that exchange their values by using some programming logic. Print the variable values before and after the exchange, as shown below:
Examples:
| Input | Output |
|-------|--------|
| 5 10  | Before:|
|       | a = 5  |
|       | b = 10 |
|       | After: |
|       | a = 10 |
|       | b = 5  |
### Ideas:
- 1. Use a temporary variable to store the value of a or b. After that, assign the value of a to b and the value of b to a. Finally, assign the value of the temporary variable to a or b.
- 2. Use the XOR operator to exchange the values of a and b.
```c
a = a ^ b;
b = a ^ b;
a = a ^ b;
```
Example:
```c
a = 5, b = 10
a = 5 xor 10 = 15 (0101 xor 1010 = 0101)
b = 15 xor 10 = 5 (1010 xor 0101 = 111)
a = 15 xor 5 = 10 (0101 xor 111 = 1010)
```
## Exercise 3
### Topic:
Create a file to enter two integer numbers and output to screen of console: sum and difference of two numbers
Examples:
| Input | Output |
|-------|--------|
|5 6    | Sum(a, b): 11|
|       | Diff(a, b): -1|
### Ideas:
- step 1: Create a file to enter two integer numbers
- step 2: Declare two integer variables a and b
- step 3: read two integer numbers from the file
- step 4: Calculate the sum and difference of two numbers
## Exercise 4
### Topic:
A marketing company wants to keep record of its employees. Each record would have the following characteristics:
First name
Last name
Age (0...100)
Gender (male or female)
Personal ID number (e.g. 012345678)
Unique employee number (00000000 -> 99999999)
Declare the variables needed to keep the information for a single employee using appropriate primitive data types. Use descriptive names. Print the data at the console.
### Ideas:
- Declare the variables needed to keep the information for a single employee using appropriate primitive data types
- Print the data at the console