#include "main.h"

int print_char(va_list ptr)
{
	putchar(va_arg(ptr, int));
	return (1);
}

int print_int(va_list ptr)
{
	char *string;
	int num, base, total;
	
	num = va_arg(ptr, int);
	base = 10;

	if (num < 0)
	{
		num = (num * -1);
		putchar('-');
	}
	
	string = convert(num, base);
	total = strlen(string);

	while (*string != '\0')
	{
		putchar(*string);
		string++;
	}
	return (total);
}

int print_string(va_list ptr)
{
	int real = 0;
	char *string;

	string = va_arg(ptr, char *);

	while (*string != '\0')
	{
		putchar(*string);
		string++;
		real++;
	}
	return (real);
}
int print_percent(__attribute__ ((unused))va_list ptr)
{
	putchar('%');
	return (1);
}
