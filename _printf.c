
#include "main.h"

/**
 * _printf - prints a string and formated characters, and returns length
 * @format: String being passed from function call
 *
 * Return: Length of printed string
 */

int _printf(const char *format, ...)
{
	va_list ptr;
	int count, total = 0, real = 0;

	if (format == NULL)
	{
		return (-1);
	}

	va_start(ptr, format);
	if (ptr == NULL)
	{
		return (-1);
	}

	for (count = 0; format != NULL && *(format + count) != '\0'; count++)
	{
		if (format[count] == '%')
		{
			if (format[count + 1] == '\0')
			{
				break;
			}
			total += specifier((format[count + 1]), ptr);
			if (total == -1)
			{
				_putchar('%');
				_putchar(format[count + 1]);
				total += 1;
			}
			count += 2;
		}
		real++;
		_putchar(format[count]);
	}
	va_end(ptr);
	return (real + total);
}
