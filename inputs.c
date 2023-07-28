#include "printf.h"

/**
 * _puts - prints a string
 * @str: input string
 * Return: count of string
 */
int _puts(char *str)
{
	int my_int = 0;

	while (*str)
	{
		_putchar(*str);
		str++;
		my_int++;
	}
	return (my_int);
}
