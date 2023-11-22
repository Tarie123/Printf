#include "main.h"
/**
 * _printf - prints like print
 * @format: actual string
 * Return: bara
 */
int _printf(const char *format, ...)
{
	va_list rags;
	int bara = 0;
	const char *str;

	va_start(rags, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					andika(va_arg(rags, int));
					bara++;
					break;
				case 's':
					str = va_arg(rags, const char *);
					while (*str)
					{
						andika(*str);
						bara++;
						str++;
					}
					break;
				case '%':
					andika('%');
					bara++;
					break;
				default:
					andika('%');
					andika(*format);
					bara += 2;
					break;
			}
		}
		else
		{
			andika(*format);
			bara++;
		}
		format++;
	}
	va_end(rags);
	return bara;
}
