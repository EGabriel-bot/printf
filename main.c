#include <limits.h>
#include <stdio.h>
#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int len = 0;
	int len2 = 0;
	/*int size = 0;
	int size2 = 0;*/

	len = printf("This is a test: %d, %d, %d.\n", 0, 234, -100);
	len2 = _printf("This is a test: %d, %d, %d.\n", 0, 234, -100);

	printf("Length for standard: %d. Length for custom: %d.\n", len, len2);
	/*size = printf("%d, %d\n", len, len2);
	size2 = _printf("%d, %d\n", len, len2);

	printf("%d, %d\n", size, size2);
	_printf("%d, %d\n", size, size2);*/

	return (0);
}
