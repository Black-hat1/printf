#include "printf.h"

/**
 * _puts - prints a string
 * @string: input string
 * Return: count of string
 */
int _puts(char *string)
{
	int my_int = 0;

	while (*string)
	{
		_putchar(*string);
		string++;
		my_int++;
	}
	return (my_int);
}
