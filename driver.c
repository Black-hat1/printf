#include "printf.h"
#include <stdarg.h>

/**
 * driver - selector for the function
 * @format: string
 * Description: the function loops through structs
 * selector[] meant for struct
 * Return: pointer
 * structype selector - struct
 */
int (*driver(char *format))(char *format, va_list)
{
	int i;

	structype selector[] = {
	{"%c", putc},
	{"%s", print_string},
	{"%d", print_int},
	{"%i", print_int},
	{"%%", printpercent},
	{"%x", _printhex},
	{"%X", print_Hex},
	{"%o", print_octa},
	{NULL, NULL}
	};

	if (format[1] == ' ' || format[1] == '\0')
		return (NULL);
	for (i = 0; selector[i].q; i++)
	{
		if (format[1] == selector[i].q[1])
			return (selector[i].u);
	}
	return (NULL);
}
