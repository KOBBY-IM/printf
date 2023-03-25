#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int _putchar(char c);
int print_num(int n);
int print_char(va_list h);
int print_str(va_list h);
int print_int(va_list h);
int print_bin(va_list h);

/**
 * struct check - Holds a character and matching function call
 * @c: character element
 * @f: pointer to fucntion call
 *
 */
typedef struct check
{
	char c;
	int (*f)(va_list);
} fmt;

#endif
