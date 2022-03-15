#include "main.h"

int print_char(va_list ptr)
{
	_putchar(va_arg(ptr, int));
	return (1);
}

int print_int(va_list ptr)
{
	char *string;
	int num, base, total, store = 0;
	
	num = va_arg(ptr, int);
	base = 10;

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
int print_percent(__attribute__ ((unused))va_list ptr)
{
	_putchar('%');
	return (1);
}
