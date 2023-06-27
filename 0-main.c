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

	len = _printf("Beautiful day.\n");
	len2 = printf("Good Morning.\n");
	_printf("character:[%c]\n", len);
	printf("Character:[%c]\n", len2);
	_printf("String:[%s]\n", "len!");
	printf("String:[%s]\n", "len2!");
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	return (0);
}

