#include "main.h"
/**
 * print_integer - prints int as the name would suggest
 * @n: the int to display
 *Return: some nbr
 */
int print_integer(int n)
{
	int divisor, digit, i, counter = 0, temp, digit_count = 0;

	if (n < 0)
	{
		counter += _putchar('-');
		n = -n;
	}
	temp = n;
	do
	{
		temp /= 10;
		digit_count++; 
	}while (temp != 0);
	temp = n;
	while (digit_count > 0)
	{
		divisor = 1;
		for (i = 1; i< digit_count; i++)
			divisor *= 10;
		digit = temp/ divisor;
		counter += _putchar(digit + '0');
		temp %= divisor;
		digit_count--;
	}
	return (counter);
}
