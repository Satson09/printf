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

	len = _printf("Beautiful day.\n");
	printf("%d\n", len);
	len = _printf("H");
	printf("%c\n", len);
	len =  _printf("I am a string !\n");
	len = _printf("%\n");
	printf("%%\n");
	return (0);
}
