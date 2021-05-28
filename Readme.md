# Basic step by step course on C++

## Data types

### Default/Built-in Datatype

1. Int
2. Float
3. Char
4. Double -> High precision numbers
5. Boolean

| Data Types             | Size(In Bytes) | Range                           |
| ---------------------- | -------------- | ------------------------------- |
| short int              | 2              | -32,768 to 32,768               |
| unsigned short int     | 2              | 0 to 65,535                     |
| unsigned int           | 4              | 0 to 4,294,967,295              |
| int                    | 4              | -2,147,483,648 to 2,147,483,648 |
| long int               | 4              | -2,147,483,648 to 2,147,483,648 |
| unsigned long int      | 4              | 0 to 4,294,967,295              |
| long long int          | 8              | -(2^63) to (2^63)-1             |
| unsigned long long int | 8              | 0 to (2^64)-1                   |
| signed char            | 1              | -128 to 127                     |
| unsigned char          | 1              | 0 to 255                        |
| float                  | 4              |                                 |
| double                 | 8              |                                 |
| long double            | 12             |                                 |
| wchar_t                | 2 or 4         | I wide character                |

### How is Range calculated from bytes

1. **Signed char** has 1 byte : 2^8 combinations which makes total 256 combinations. Since 0 is included so the range is 0 to 255.
1. **Unsigned char** has 1 byte : But the first bit of every byte is reserved for the sign ie +or-. Hence 2^7 combinations which makes total 128 combinations. Since 0 is included so the range is -128 to 127.

### User defined

1. Struct
2. Union
3. Enum

### Derived

1. Array
2. Function
3. Pointer

## Variable

### Scope

1. Local
2. Global

> Note : We can have local and global variable with same name but the local variable takes the precidence.

### Naming

1. Case sensitive
2. Max 255 characters
3. Can start with letter or underscore.
4. Can have letter and numbers after first character.

## I/O Streams

Sequence of bytes corresponding to input and output are commonly known as streams.

A program is stored in a file system somewhere in the hard drive. When it is executed it is first loaded into the main memory from the hard drive.

1. Input Stream : Flow of bytes takes place from input device to main memory.
2. Output Stream : Flow of bytes takes place from main memory to output device.

## Operators

1. "<<" : Insertion Operator(Output)
2. ">>" : Extraction Operator(Input)
3. Arithematic Operator : +,-,\*,/,%,++,--;
4. Comparison : ==,>,<,>=,<=,!= (This return 0 for false and 1 for true);
5. Logical : &&, ||, !
6. :: -> This is scope resulution operator. Used to access the global scope.

## Header Files

1. System Defined: It comes with the compiler.
2. User Defined: It is written by the programmer.

Reference for system defined header files : https://en.cppreference.com/w/cpp/header

## Typecasting

Refer 4_typecasting.cpp

## 32 bit vs 64 bit processor

### 32 bit processor

The CPU register stores memory addresses, which is how the processor accesses data from RAM. One bit in the register can reference an individual byte in memory, so a 32-bit system can address a maximum of 2^32 Bytes (4,294,967,296 bytes) of RAM.

Now,

1. 1024(2^10) Byte = 1 KB/Kilobyte
2. 1024(2^10) KB = 1 MB
3. 1024(2^10) MB = 1 GB

So 2^2 \* 2^30 Bypte = 4 GB

So a 32 bit processor can access upte **4GB RAM** at once.Most computers released over the past two decades were built on a 32-bit architecture, hence most operating systems were designed to run on a 32-bit processor.

> Note : The actual limit is often less around 3.5 GB since part of the register is used to store other temporary values besides memory addresses.

### 64 bit processor

A 64-bit register can theoretically reference 18,446,744,073,709,551,616 bytes, or **17,179,869,184 GB** (16 exabytes) of memory. This is several million times more than an average workstation would need to access. What’s important is that a 64-bit computer (which means it has a 64-bit processor) can access more than 4 GB of RAM. **If a computer has 8 GB of RAM, it better has a 64-bit processor. Otherwise, at least 4 GB of the memory will be inaccessible by the CPU.**

## Constants, manipulators and operator precedence

### Constants

We use const keyword befor a variable declaration to define it as a constant. Eg : `const int a = 10`

### Manipulators

Some operators that help us manipulate the output display. Eg

1. endl : Use to end the line.
2. setw : Present in iomanip system header. This is used for right justification of your output. Check 5_manip.cpp

### Operator precedence and associativity

1. Operator precedence is the order in which each operator gets priority over the other in an expression.
2. Associativity is the direction of execution of an operator.

Rule of thumb

1. Add parenthesis based on the operator precedence.
2. If the precedence is same then add it based on associativity.

Reference : http://en.cppreference.com/w/cpp/language/operator_precedence

## Control structures

1. Sequence structure : Basic application with one statement after another.
2. Selection structure : If-else, switch
3. Loop structure : for, while, do-while

Syntax of if-else

```cpp
if(a<10){
    // work 1
} else if(a<20){
    // work 2
} else {
    // work 3
}
```

Syntax of switch

```cpp
switch(a){
    case 10:
        // work 1
        break;
    case 10:
        // work 2
        break;
    default:
        // work 3
        break;
}
```

Syntax of for loop

```cpp
for(int i=0; i<5; i++){
    // Work
}
// for(initialization; condition; udpation){
// }
```

Syntax of while

```cpp
int i = 0;
while(i<10){
    i++;
    // Work
}

// initialization
// while(condition){
//     updation
// }
```

Syntax of do-while

```cpp
int i = 0;
do{
    i++;
    // Work
}while(i<10)

// initialization
// do{
//     updation
// }while(condition)
```

## Break and Continue

1. Break : It breaks the loop.
2. Continue : It breaks the iteration. The loop continues running.

## Pointers

Refer to 5_pointers.cpp

## Arrays and Pointers

Refer to 6_arrays.cpp

- Formula for pointer arithematics : `(New address) = (Current address) + i*(Size of data type);` where i is the element index.

## Structures, Unions & Enums

Refer to 7_struct_union_enum

## Function and Function Prototypes

- Function prototypes are used for function declaration, generally at the top of the file to let every other function in the file to have access to that function. Now even if you define the function at the end of file it would make it accessible to all other function declared before it.
- Refer to 8_function_prototype.cpp

## Referance

https://www.youtube.com/playlist?list=PLu0W_9lII9agpFUAlPFe_VNSlXW5uE0YL
