#include <unstd.h>
/**
 * _putchar - displays 1 character
 * @c: the character to be printed
 * Return: NONE
 */
void _putchar(char c)
{
	write(1, &c, 1);
}
