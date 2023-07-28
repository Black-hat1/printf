#include "printf.h"

/**
 * _printf - prints formatted data
 * @format: string with the format to print
 * Return: number of characters written
 */
int _printf(const char *format, ...)
{
	int my_text = 0, (*structype)(char *, va_list);
	char q[3];
	va_list args;

	if (format == NULL)
		return (-1);
	q[2] = '\0';
	va_start(args, format);
	_putchar(-1);
	while (format[0])
	{
		if (format[0] == '%')
		{
			structype = driver(format);
			if (structype)
			{
				q[0] = '%';
				q[1] = format[1];
				my_text += structype(q, args);
			}
			else if (format[1] != '\0')
			{
				my_text += _putchar('%');
				my_text += _putchar(format[1]);
			}
			else
			{
				my_text += _putchar('%');
				break;
			}
			format += 2;
		}
		else
		{
			my_text += _putchar(format[0]);
			format++;
		}
	}
	_putchar(-2);
	return (my_text);
}
