#include "main.h"

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
		return(-1);
	}
	else
	{
		return (total);
	}
}
