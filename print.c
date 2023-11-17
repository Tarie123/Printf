#include "main.h"
/**
 * function _printf is to print data
 * @format inputs string 
 * Return printed characters
 */
int _printf(const char *format, ...)
{
	int char_p = 0;
	va_list ls_args;
	
	if (format == NULL)
		return -1;
	va_start(ls_args, format);
	while(*format)
	{
		if(*format != '%')
		{
			write(1, format, 1);
			char_p ++;
		}
		else
		{
			format ++;
			if(*format == '\0')
				break;
		}
		if (*format == '%'){
			write(1, format, 1);
			char_p ++;
		}
		else if (*format == 'c')
		{
			char c = va_arg(ls_args, int);
			write(1, &c, 1);
			char_p ++;
		}
		else if (*format == 's'){
			char *strl = va_arg(ls_args, char*);
			int str_len = 0;
			while (strl[str_len] != '\0')
			{
				str_len ++;
				write(1, strl, str_len);
				char_p += str_len;
			}
		}
		if (*format == '%' && (*(format + 1) == 'd' || (*format + 1) == 'i'))
		{
			printf_d_i_specifier(format,ls_args);
		}
		format ++;
	}
va_end(ls_args);
return char_p;
}
