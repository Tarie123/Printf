#include "main.h"
/**
 * _pritnf - printf funct
 * @format: inputs
 * Return: nbr of characters to dispplay
 */
int _printf(const char *format, ...)
{
	va_list rags;
	int counter = 0;
	
	va_start(rags, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					counter += _putchar(va_arg(rags, int));
					break;
				case 's':
					counter += print_string(va_arg(rags, const char*));
					break;
				case '%':
					counter += _putchar('%');
					break;
				default:
					counter += _putchar('%');
					counter += _putchar(*format);
			}
		}
		else
		{
			counter += _putchar(*format);
		}
		format++;
	}
	va_end(rags);
	return counter;
}
