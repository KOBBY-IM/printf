#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * uil - typedef for unsigned long int
 */
typedef unsigned long int uil;


int _printf(const char *format, ...);
int _putchar(char c);
int print_uil_num(uil n);
int print_num(long int n);
int print_char(va_list h);
int print_str(va_list h);
int print_int(va_list h);
int print_bin(va_list h);
int print_unsign(va_list h);
int print_octal(va_list h);
int print_hexa(va_list h);
int print_heXa(va_list h);
int print_p(va_list h);
int print_S(va_list h);
int print_rev(va_list h);
int print_rot13(va_list h);

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
