## Description
This project is the function printf created from scratch. It replicates functionalities from the original C programming function.

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

```
#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
    return (0);
}
```

## Output
Our code should output this if the compilation process was succesfully completed

Let's try to printf a simple sentence.\
Let's try to printf a simple sentence.\
Length:[39, 39]\
Length:[39, 39]\
Negative:[-762534]\
Negative:[-762534]\
Unsigned:[2147484671]\
Unsigned:[2147484671]\
Unsigned octal:[20000001777]\
Unsigned octal:[20000001777]\
Unsigned hexadecimal:[800003ff, 800003FF]\
Unsigned hexadecimal:[800003ff, 800003FF]\
Character:[H]\
Character:[H]\
String:[I am a string !]\
String:[I am a string !]\
Address:[0x7ffe637541f0]\
Address:[0x7ffe637541f0]\
Percent:[%]\
Percent:[%]\
Len:[12]\
Len:[12]\
Unknown:[%r]\
Unknown:[%r]

## About
This is a project for the Holberton School


