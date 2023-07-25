#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

#define UNUSED(x) (void)(x)
#define BUFF_SIZE 1024

/* FLAGS */
#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#define F_HASH 8
#define F_SPACE 16

/* sizes */
#define S_LONG 2
#define S_SHORT 1

/**
 * struct fmt - struct op
 *
 * @fmt: Format
 * @fn: The function
 */
struct fmt
{
	char fmt;
	int (*fn)(va_list, char[], int, int, int, int);
};

/**
 * typedef struct fmt fmt_t - struct op
 *
 * @fmt: Format
 * @fmt_t: The function
 */
typedef struct fmt fmt_t;

int _printf(const char *format, ...);
int handle_print(const char *fmt, int *i, va_lisr args, char buffer[], int width, int precision, int size);

/*** functions ***/

/* Chars and Strings */
int print_char(va_list types, char buffer[], int flags, int width, int precision, int size);
int print_string(va_list types, char buffer[], int flags, int width, int precision, int size);
int print_percentage(va_list types, char buffer[], int flags, int width, int precision, int size);

/* Print Numbers */
int print_int(va_list types, char buffer[], int flags, int width, int precision, int size);
int print_binary(va_list types, char buffer[], int flags, int width, int precision, int size);
int print_unsigned(va_list types, char buffer[], int flags, int width, int precision, int size);
int print_octal(va_list types, char buffer[], int flags, int width, int precision, int size);
int print_hexadecimal(va_list types, char buffer[], int flags, int width, int precision, int size);
int print_hexa_upper(va_list types, char buffer[], int flags, int width, int precision, int size);

int print_hexa(va_list types, char map_to[], char buffer[], int flags, char flag_ch, int width, int precision, int size);

/* Non printable characters */
int print_non_printable(va__list types, char buffer[],int flags, int width, int precision, int size);

/* Print Memory address */
int print_pointer(va_list types, char buffer[], int flags, int width, int precision, int size);

/* other specifiers */
int get_flags(cons char *format, int *i);
int get_width(const char *format, int *i, va_list args);
int get_precision(const char *format, int *i, va_list args);
int get_size(const char *format, int *i);

/* String in reverse */
int print_reverse(va_list types, char buffer[], int flags, int width, int precision, int size);

/* string in rot 13 */

int print_rot13string(va_list types, char buffer[], int flags, int width, int precision, int size);

/* with handler */
int handle_write_char(char c, char buffer[], int flags, int width, int precision, int size);
int write_number(int is_positve, int ind, char buffer[], int flags, int width, int precision, int size);
int write_num(int ind, char bff[], int flags, int width, int precision, int length, char pdd[], char exrta_c);
int write_pointer(char buffer[], int ind, int length, int flags, int width, char pdd[], char extra_c, int padd_start);

int write_unsigned(int is_negative, int ind, char buffer[], int flags, int width, int precision, int size);

/* UTIL */
int is_printable(char);
int append_hexa_code(char, char[], int);
int is_digit(char);

long int convert_size_number(long int num, int size);
long int conver_size_unsgnd(unsigned long int num, int size);

#endif
