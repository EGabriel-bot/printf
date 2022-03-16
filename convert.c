#include "main.h"

/**
 * convert - function that converts an integer into a string
 * @num: integer passed down from variadic argument in main function
 * @base: varies on format specifier used, determines format of integer
 *
 * Return: pointer to the string created
 */

char *convert(unsigned int num, int base)
{
	static const char character[] = "0123456789ABCDEF";
	static char buffer[50];
	char *ptr;

	ptr = &buffer[49];
	*ptr = '\0';

	while (num != 0)
	{
		*--ptr = character[num % base];
		num = num / base;
	}
	return (ptr);
}
