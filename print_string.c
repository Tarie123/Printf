#include "main.h"
/**
 *
 *
 *
 *
 */
int print_string(const char *str)
{
	int counter = 0;

	while(*str != '\0')
	{
		counter += _putchar(str);
		str++;
	}
	return (counter);
}
