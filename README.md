
## Description
This project is the function printf created from scratch. It replicates functionalities from the original c programming function.

## What is printf?
Printf is a function found in the C programming language is one of the main output function. The function sends formatted output to the screen.Anything that you want to be printed should be inside quotations. With the printf function we use different specifiers to print different types. For example we can use %d to print integers.

```
#include <stdio.h>
int main()
{
    int testInteger = 5;
    printf("Number = %d", testInteger);
    return 0;
}
```

## Prototype
`int _printf(const char *format, ...);`

- Format is a string of characters. This string represents whatever we want to write.

- Return: The amount of characters printed except the null byte.

- Write output to stdout, the standard output stream.**

## Compile
Our code is going to be compiled with the following flags

`gcc -Wall -Werror -Wextra - pedantic *.c`

## Testing

We tested our code with the main.c file that was provided to us by the project

## Output
Our code should output this if the compilation process was succesfully completed

## About
This is a project for the Holberton School

