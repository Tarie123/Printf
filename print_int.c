#include "main.h"
/**
 * print_int - print integers
 * @number: number to print
 * Return: void
 */
void print_int(int number)
{
	while (number != 0)
	{
		_putchar('\0' + number % 10);
		number /= 10;
	}
}
