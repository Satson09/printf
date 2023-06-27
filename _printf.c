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
				case 'd':
				case 'i':
				count += printf("%d", va_arg(foo, int));
				break;
				case 'u':
				count += printf("%u", va_arg(foo, unsigned int));
				break;
				case 'o':
				count += printf("%o", va_arg(foo, unsigned int));
				break;
				case 'x':
				count += printf("%x", va_arg(foo, unsigned int));
			        break;
				case 'X':
				count += printf("%X", va_arg(foo, unsigned int));
				break;
				case 'p':
				count += printf("%p", va_arg(foo, void *));
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
