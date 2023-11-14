#include "main.h"
/**
 * print_decimal_specifier - for printing %i and %d
 * @args: stores the variable passed argument
 * Return: this returns nbr of passed digits
 */
int print_decimal_specifier(va_list argumenst)
{
	int y = va_arg(argumenst, int);
	int x, number, temp, last_digit = y % 10, digit, digit_count = 1;

	y = y / 10;
	number = y;
	if (last_digit < 0) {
		_putchar('-');
		number = -number;
		y = -y;
		last_digit = -last_digit;
		digit_count++;
	}
	if (number > 0) {
		temp = number;
		while (temp > 0)
		{
			temp /= 10;
			digit_count++;
		}
		char* buffer = (char*)malloc(digit_count);
		if (buffer == NULL)
		{
			return (0);
		}
		for (x = digit_count - 2; x >= 0; x--) {
			buffer[x] = number % 10 + '0';
			number = number / 10;
		}
		for (x = 0; x < digit_count - 1; x++)
		{
			write(1, buffer[x], 1);
		}
		free(buffer);
	}
	write(1, (last_digit + '0'), 1);
	return digit_count;
}
