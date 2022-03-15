#ifndef MAIN_H
#define MAIN_H

/*
* _putchar 
* specifier - checks for conversion specifier
* validator - validates what specifier it is, return 1 for true, 0 for false
* function pointer - points to appropiate function based on specifier
*/

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct convert
{
	char *data;
	int (*f)(va_list ptr);
} conv;

int _strlen(char *s);
int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list ptr);
int print_int(va_list ptr);
int print_string(va_list ptr);
int print_percent(va_list ptr);
char *convert(unsigned int num, int base);
int specifier(char c, va_list ptr);

#endif 
