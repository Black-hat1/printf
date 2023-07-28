#include "my_printf.h"
/**
 * _abs - calculates absolute value
 * @number: input integer
 * @Return: rerturns integer value
 */
int _abs(int number)
{
	if (number < 0)
	{
		return (-1 * number);
	}
	else
	{
		return (number);
	}
}

/**
 * my_int_digit - counts the digits
 * @number: inputs integer
 * Return: digit counter
 */
int my_int_digit(int number)
{
	int count = 0;
	int number1 = number;

	if (number <= 0)
		count += 1;
	while (_abs(number1) != 0)
	{
		number1 = number1 / 10;
		count++;
	}
	return (count);
}

/**
 *integer - a funtion to print integer
 *@number: integer input
 *Return: digit count
 */
int integer(number)
{
	unsigned int unint;
	int count;

	count = my_int_digit(number);
	if (number < 0)
	{
		_puctchar('-');
		unint = -number;
	}
	else
		unint = number;

	if (unint >= 10)
		integer(unint / 10);
	_putchar(unint % 10 + '0');

	return (count);
}

/**
 * print_int - prints a number
 * @format: format to print
 * @args: va_list with number to print
 * Return: number of chars printed
 */
int print_int(char *format, va_list args)
{
	int number = va_arg(args, int);
	int number2;
	(void)format;

	number2 = integer(number);
	return (number2);
}
