#ifndef MY_PRINTF_H
#define MY_PRINTF_H

#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * struct structprint - structure container
 * @q: the location and method to translate data
 * @u: print functions for specific types
 *
 * Return: int
 */
typedef struct structprint
{
	char *q;
	int (*u)(char *format, va_list);
} structype;

int _printf(const char *format, ...);
int _inputs(char *str);
int putc(char *format, va_list);
int print_string(char *format, va_list);
int (*driver(char *format))(char *format, va_list);
int print_int(char *format, va_list args);
int integer(int number);
int my_int_digit(int number);
int _abs(int number);
int printpercent(char *format, va_list args);
int _printhex(char *format, va_list);
int print_Hex(char *format, va_list);
int print_octa(char *format, va_list);
int printunsign(char *format, va_list);
#endif
