#include "main.h"

char *convert(unsigned int num, int base)
{
	static char character[]= "0123456789ABCDEF";
	static char buffer[50];
	char *ptr;

	ptr = &buffer[49];
	*ptr = '\0';

	while(num != 0)
	{
		*--ptr = character[num % base];
		num = num / base;
	}
	return(ptr);
}
