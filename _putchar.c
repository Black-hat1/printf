#include <unistd.h>

/**
 * _putchar - print char with stdout
 * @c: char to print
 * Return: Output.
 */
int _putchar(char c)
{
	static int my_int;
	static char buffer[1024];

	if (c == -1)
	{
		my_int = 0;
		return (0);
	}
	if (c == -2 || my_int == 1024)
	{
		write(1, buffer, my_int);
		my_int = 0;
	}
	if (c != -1 && c != -2)
	{
		buffer[my_int] = c;
		my_int++;
		return (1);
	}
	return (0);
}
