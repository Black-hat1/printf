#include "my_printf.h"

/**
 * print_string - print string
 * @args: List
 * @format: format str
 * Return: number str for print
 */
int print_string(char *format, va_list args)
{
	char *str = va_arg(args, char *);
	int my_int;
	(void)format;

	if (str == NULL)
		str = "(null)";
	my_int = _puts(str);
	return (my_int);
}
