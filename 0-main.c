#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	int len2;
	unsigned int ui = 0;
	void *addr = 0;

	len = _printf("Beautiful day.\n");
	len2 = printf("Good Morning.\n");
	_printf("character:[%c]\n", len);
	printf("Character:[%c]\n", len2);
	_printf("String:[%s]\n", "len!");
	printf("String:[%s]\n", "len2!");
	_printf("Unsigned:[%u]\n", ui);
	printf("Unsigned:[%u]\n", ui);
	len = _printf("Percent:[%%]\n");
	_printf("Unsigned octal:[%o]\n", ui);
	printf("Unsigned octal:[%o]\n", ui);
	printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	_printf("Address:[%p]\n", addr);
	printf("Address:[%p]\n", addr);
	return (0);
}
