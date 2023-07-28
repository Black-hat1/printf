#include "my_printf.h"

/**
 * _inputs - prints a string
 * @str: input string
 * Return: count of string
 */
int _inputs(char *str);
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
