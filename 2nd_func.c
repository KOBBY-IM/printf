#include "main.h"

/**
 * print_bin - Function that converts an integer and prints it to stdout
 * in binary
 * @h: va_list argument with value needed
 *
 * Return: The number of character interger in binary printed to stdout
 */
int print_bin(va_list h)
{
	unsigned int num = va_arg(h, unsigned int);
	int bin[32], total = 0, i = 0;

	while (num > 0)
	{
		bin[i] = (num % 2);
		num /= 2;
		i++;
	}
	for (--i; i >= 0; i--)
		total += _putchar(bin[i] + '0');
	return (total);
}

/**
 * print_unsign - Function that prints an unsigned int to stdout
 * @h: va_list argument with value needed
 *
 * Return: The number of unsinged integers printed to stdout
 */
int print_unsign(va_list h)
{
	unsigned int num = va_arg(h, unsigned int);
	int total;

	total = print_num((long int) num);
	return (total);
}

/**
 * print_octal - Function that prints unsigned int in octal(base(8)) to stdout
 * @h: va_list argument with value needed
 *
 * Return: Number of octal characters printed to stdout
 */
int print_octal(va_list h)
{
	unsigned int num = va_arg(h, unsigned int);
	int total = 0, oct[32], i = 0;

	while (num > 0)
	{
		oct[i] = num % 8;
		num /= 8;
		i++;
	}
	for (--i; i >= 0; i--)
		total += _putchar(oct[i] + '0');
	return (total);
}

/**
 * print_heXa - Function that prints unsigned int in hexadecimal(base(16))
 * to stdout
 * @h: va_list argument with value needed
 *
 * Return: Number of hexadecimal characters printed to stdout
 */
int print_heXa(va_list h)
{
	unsigned int num = va_arg(h, unsigned int);
	int total = 0, heX[32], i = 0;

	while (num > 0)
	{
		heX[i] = num % 16;
		if (heX[i] < 10)
			heX[i] += '0';
		else
			heX[i] += ('A' - 10);
		num /= 16;
		i++;
	}
	for (--i; i >= 0; i--)
		total += _putchar(heX[i]);
	return (total);
}

/**
 * print_hexa - Function that prints unsigned int in hexadecimal(base(16))
 * to stdout
 * @h: va_list argument with value needed
 *
 * Return: Number of hexadecimal characters printed to stdout
 */
int print_hexa(va_list h)
{
	unsigned int num = va_arg(h, unsigned int);
	int total = 0, hex[32], i = 0;

	while (num > 0)
	{
		hex[i] = num % 16;
		if (hex[i] < 10)
			hex[i] += '0';
		else
			hex[i] += ('a' - 10);
		num /= 16;
		i++;
	}
	for (--i; i >= 0; i--)
		total += _putchar(hex[i]);
	return (total);
}
