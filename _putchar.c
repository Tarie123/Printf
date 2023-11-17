#include "main.h"
/**
 * _putchar - display things
 * @c: what is to be displayed
 * Return: some nbr
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
