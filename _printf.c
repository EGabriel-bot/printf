#include "main.h"

int _printf(const char *format, ...)
{
	va_list ptr;
	int count, total = 0, real = 0;

	if (format == NULL)
	{
		exit(-1);
	}

	va_start(ptr, format);
	if (ptr == NULL)
	{
		exit(-1);
	}

	for (count = 0; format != NULL && *(format + count) != '\0'; count++)
	{
		if (format[count] == '%')
		{
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
