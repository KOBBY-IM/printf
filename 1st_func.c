#include "main.h"

/**
 *_putchar - function to display a single char to stdout
 *@c: character to use
 *
 * Return: Always 1 for success. -1 if fail
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}


/**
 * print_char - function to print a single char to stdout
 * @h: va_list argument with value needed
 *
 * Return: Always 1 for success, exit -2 if fail
 */

int print_char(va_list h)
{
	int pci;

	pci = _putchar(va_arg(h, int));
	if (pci == -1)
		exit(-3);
	return (pci);
}

/**
 * print_str - function to print a string to stdout
 * @h: va_list argument with value needed
 *
 * Return: Number of Characters printed to stdout
 */

int print_str(va_list h)
{
	int psi = 0;
	char *s;

	s = (va_arg(h, char *));
	if (s == NULL)
		s = "(null";
	while (s[psi])
		_putchar(s[psi++]);
	return (psi);
}

/**
 * print_int - function that Prints an integer to stdout
 * @h: va_list argument with value needed
 *
 * Return: number of integer characters printed
 */

int print_int(va_list h)
{
	int num = va_arg(h, int), count = 0;
	int r = 1;


	if (num < 0)
	{
		count += _putchar('-');
		num *= -1;
	}

	while ((num / r) >= 10)
		r *= 10;
	while (r > 0)
	{
		count += _putchar((num / r) + '0');
		num %= r;
		r /= 10;
	}
	return (count);
}
