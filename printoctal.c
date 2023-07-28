#include "printf.h"
/**
 * print_octa - prints a hex
 * @format: format to print hexadecimal
 * @args: list that contains the hexa
 * Return: Number
 */
int print_octa(char *format, va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	unsigned int cent;
	char *octa;
	int i, i2 = 0, cotname = 0;
	(void)format;

	if (num == 0)
		return (_putchar('0'));
	for (cent = num; cent != 0; i2++)
	{
		cent = cent / 8;
	}
	octa = malloc(i2);
	if (!octa)
		return (-1);
	for (i = i2 - 1; i >= 0; i--)
	{
		octa[i] = num % 8 + '0';
		num = num / 8;
	}
	for (i = 0; i < i2 && octa[i] == '0'; i++)
		;
	for (; i < i2; i++)
	{
		_putchar(octa[i]);
		cotname++;
	}
	free(octa);
	return (cotname);
}
