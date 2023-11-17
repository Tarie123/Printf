#include "main.h"
/**
 * print_string - displaying a string
 * @str: string in actual sense to be used
 * Return: Nbr of strings
 */
int print_string(const char *str)
{
	int counter = 0;

	while (*str != '\0')
	{
		counter += _putchar(*str);
		str++;
	}
	return (counter);
}
