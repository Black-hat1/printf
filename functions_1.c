#include "main.h"

/**
 * print_unsigned - prints unsinged number
 * @types: List of arguments
 * @buffer: buffer aray to handle print
 * @flags: calculates flags
 * @width: get width
 * @precision: precision
 * @size: size
 * Return: number of printed chars
 */
int print_unsigned(va_list types, char buffer[], int flags, int width, int precision, int size)
{
	int i = BUFF_SIZE -2;
	unsigned long int num = va_arg(types, unsigned long int);

	num = convert_size_unsgnd(num, size);

	if (num == 0)
		buffer[i--] = '0';

	buffer[BUFF_SIZE - 1] = '\0';

	while (num > 0)
	{
		buffer[i--] = (num % 10) + '0';
		num /= 10;
	}

	i++;

	return (write_unsgnd(0, i, buffer, flags, width, precision, size));
}

/**
 * print_octal - prints unsinged number in octal notation
 * @types: List of arguments
 * @buffer: buffer aray to handle print
 * @flags: calculates flags
 * @width: get width
 * @precision: precision
 * @size: size
 * Return: number of printed chars
 */

int print_octal(va_list types, char buffer[], int flags, int width, int precision, int size)
{
	int i = BUFF_SIZE - 2;
	unsigned long int num = va_arg(types, unsigned long int);
	unsigned long int init_num = num;

	UNUSED(width);

	num = convert_size_unsgnd(num, size);

	if (num == 0)
		buffer[i--] = '0';

	buffer[BUFF_SIZE- 1] = '\0';

	while (num > 0)
	{
		buffer[i--] = (num % 8) + '0';
		num /= 8;
	}

	if (flags & F_HASH && init num != 0)
		buffer[i--] = '0';

	i++;

	return (write_unsgnd(0, i, buffer, flags, width, precision, size));
}

/**
 * print_hexadecimal - prints unsinged number in hexadecimal notation
 * @types: List of arguments
 * @buffer: buffer aray to handle print
 * @flags: calculates flags
 * @width: get width
 * @precision: precision
 * @size: size
 * Return: number of printed chars
 */
int print_hexadecimal(va_list types, char buffer[], int flags, int width, int precision, int size)
{
	return (print_hexa(types, "0123456789abcdef", buffer, flags, 'x', width, precision, size));
}

/**
 * print_hexa_upper - prints hexadecimal number in uppercase
 * @types: List of arguments
 * @buffer: buffer aray to handle print
 * @flags: calculates flags
 * @width: get width
 * @precision: precision
 * @size: size
 * Return: number of printed chars
 */

int print_hexa_upper(va_list types, char buffer[], int flags, int width, int precision, int size)
{
	return (print_hexa(types,"0123456789ABCDEF",buffer, flags,'X', width, precision, size));
}

/**
 * print_hexa - prints hexa number in upper or lower
 * @types: List of arguments
 * @buffer: buffer aray to handle print
 * @flags: calculates flags
 * @width: get width
 * @precision: precision
 * @size: size
 * Return: number of printed chars
 */
int print_hexa(va_list types, charr map_to[], char buffer[], int flags, char flag_ch, int width, int precision, int size)
{
	int i = BUFF_SIZE - 2;
	unsigned long int num = va_arg(types, unsigned long int);
	unsigned long int init_num = num;

	UNUSED(width);

	num = convert_size_unsgnd(num, size);

	if (num ==0)
		buffer[i--] = '0';

	buffer[BUFF_SIZE - 1] = '\0';

	while (num > 0)
	{
		buffer[i--] = map_to[num % 16];
		num /= 16;
	}

	if (flags & F_HASH && init_num != 0)
	{
		buffer[i--] = flag_ch;
		buffer[i--] = '0';
	}

	i++;

	return (write_unsgnd(0, i, buffer, flags, width, precision, size));
}