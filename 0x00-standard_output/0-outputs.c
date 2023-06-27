#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * _printf : Custom printf function that produces output according to a format
 *
 * @format : format string for output format
 * @...: Additional arguments based on the format string
 * @% : prints a literal
 *
 * Return:(count)
 */

int _printf(const char *format, ...)

{
	int count = 0;

	va_list foo;

	va_start(foo, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
				count += printf("%c", va_arg(foo, int));
				break;
				case 's':
				count += printf("%s", va_arg(foo, const char *));
				break;
				case '%':
				count += putchar('%');
				break;
				default:
				putchar('%');
				putchar(*format);
				count += 2;
				break;

			}
		}	
		else
		{
			putchar(*format);
			count++;
		}
		format++;
	}
	va_end(foo);

	return(count);
}
