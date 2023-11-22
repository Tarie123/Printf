#include "main.h"
/**
 * andika - putchar like
 * @c: character
 * Return: number
 */
int andika(char c)
{
	return (write(1, &c, 1));
}
