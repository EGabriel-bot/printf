#include "main.h"

/**
 * print_char - function that prints a single character
 * @ptr: variadic argument being passed from main (character)
 *
 * Return: 1 for length of character
 */

int print_char(va_list ptr)
{
	_putchar(va_arg(ptr, int));
	return (1);
}

/**
 * print_int - function that prints an integer by converting it to string
 * @ptr: variadic argument being passed from main (integer)
 *
 * Return: 1 for 0, length of positive integer string, length + 1 for negative
 */

int print_int(va_list ptr)
{
	char *string;
	int num, base = 10, total, store = 0;

	num = va_arg(ptr, int);

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	if (num < 0)
	{
		store = num;
		num = (num * -1);
		_putchar('-');
	}

	string = convert(num, base);
	total = _strlen(string);

	while (*string != '\0')
	{
		_putchar(*string);
		string++;
	}

	if (store < 0)
	{
		return (total + 1);
	}
	else
	{
		return (total);
	}
}

/**
 * print_string - function that prints a string
 * @ptr: variadic argument being passed from main (string)
 *
 * Return: length of string
 */

int print_string(va_list ptr)
{
	int real = 0;
	char *string;

	string = va_arg(ptr, char *);

	while (*string != '\0')
	{
		_putchar(*string);
		string++;
		real++;
	}
	return (real);
}

/**
 * print_percent - function that prints %
 * @ptr: variadic argument being passed from main (string)
 *
 * Return: 1 for length of the % character
 */

int print_percent(__attribute__ ((unused))va_list ptr)
{
	_putchar('%');
	return (1);
}
