#include "my_printf.h"

/**
 * printpercent - prints %
 * @format: formt to use
 * @args: va_list
 * Return: number of characters printed
 */
int printpercent(char *format, va_list args)
{
	(void)format;
	(void)args;
	_putchar('%');
	return (1);
}
