#include "my_printf.h"

/**
 * putc - prints a char
 * @args: format of char
 * @format: format
 * Return: number of char in printf
 */
int putc(char *format, va_list args);
{
	(void) format;
	_putchar(va_arg(args, int));
	return (1);
}
