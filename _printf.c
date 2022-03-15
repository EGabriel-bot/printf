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
	//	printf("\nThis is count: %d, and the char: %c\n", real, format[count]); 
		if (format[count] == '%')
		{
			total = specifier((format[count + 1]), ptr);
			if (total == -1)
			{
				putchar('%');
				putchar(format[count + 1]);
				total += 1;
			}
			count += 2;
		}
		real++;
		putchar(format[count]);
	}
	va_end(ptr);
	return (real + total);
}
