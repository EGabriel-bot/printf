#include "main.h"

int _printf(const char *format, ...)
{
	va_list ptr;
	int count, real = 0, idx, total;

	conv spec[] = {
		{"c", print_char},
		{"s", print_string},
		{"d", print_int},
		{"i", print_int},
		{"%", print_percent},
	};
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
			for (idx = 0; idx < 5; idx++)
			{
				if (format[count + 1] == *(spec[idx].data))
				{
					total = spec[idx].f(ptr);
					count += 2;
				}
			}

		}
		real++;
		putchar(format[count]);
	}
	va_end(ptr);
	return (real + total);
}
