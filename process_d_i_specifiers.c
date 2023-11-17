# include "main.h"
/**
 * process_d_i_specifier - deals with d and i specifiers only
 * @format: gets input to check from
 * @arguments: these determines the variables to display
 * Return: void or None
 */
void process_d_i_specifier(const char *format, va_list arguments)
{
	format++;
	switch (*format)
	{
		case 'd'|| 'i':
			print_int(va_arg(arguments, int));
			break;
		default:
			_putchar('%');
			break;
	}
}
