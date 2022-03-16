#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct convert - contains format specifiers and function pointers
 * @data: variable to store format specifier
 * @f: pointer to appropiate function
 *
 */

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
