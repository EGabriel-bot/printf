#include "main.h"

/**
* specifier - function the will point to appropiate functions to use in printf
* @c: character found in format string after %
* @ptr: points to variadic argument being passed from main function
*
* Return: length of string being printed in pointed functions
*/

int specifier(char c, va_list ptr)
{
	int idx, total = 0;
	conv spec[] = {
		{"c", print_char},
		{"s", print_string},
		{"d", print_int},
		{"i", print_int},
		{"%", print_percent},
		{NULL, NULL},
	};

	for (idx = 0; idx < 5; idx++)
	{
		if (c == *(spec[idx].data))
		{
			total = spec[idx].f(ptr);
			break;
		}
	}
	if (idx == 5)
	{
		return (-1);
	}
	else
	{
		return (total);
	}
}
