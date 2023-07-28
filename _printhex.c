#include "printf.h"

/**
 * _printhex - prints hexadecimal
 * @format: format to print hexa
 * @args: lists that contain the hexa
 * Return: Number
 */
int _printhex(char *format, va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	unsigned int num2;
	int i, i2, copy, cotname = 0;
	char *numhex;

	(void)format;

	if (num == 0)
		return (_putchar('0'));
	for (num2 = num; num2 != 0, cotname++)
	{
		num2 = num / 16;
	}
	numhex = malloc(cotname);
	for (i = 0; num != 0; i++)
	{
		copy = num % 16;
		if (copy < 10)
			numhex[i] = copy + '0';
		else
			numhex[i] = copy - 10 + 'a';
		num = num / 16;
	}
	for (i2 = i - 1; i2 >= 0; i2--)
		_putchar(numhex[i2]);
	free(numhex);
	return (cotname);
}
/**
 * print_Hex - prints a hexadecimal
 * @format: format to print hex
 * @args: list that contain the hex
 * Return: Number of digits printed
 */
int print_Hex(char *format, va_list args)
{
	unsigned int NUM = va_arg(args, unsigned int);
	unsigned int NUM1;
	int I, I2, COPY, COTNAME = 0;
	char *NUMHEX;

	(void)format;

	if (NUM == 0)
		return (_putchar('0'));
	for (NUM1 = NUM; NUM1 != 0; COTNAME++)
	{
		NUM1 = NUM1 / 16;
	}
	NUMHEX = malloc(COTNAME);
	for (I = 0; NUM != 0; I++)
	{
		COPY = NUM % 16;
		if (COPY < 10)
			NUMHEX[I] = COPY + '0';
		else
			NUMHEX[I] = COPY - 10 + 'A';
		NUM = NUM / 16;
	}
	for (I2 = I - 1; I2 >= 0; I2--)
		_putchar(NUMHEX[I2]);
	free(NUMHEX);
	return (COTNAME);
}
