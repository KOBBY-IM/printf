#include "main.h"

/**
 * print_bin - Function that converts an integer and prints it to stdout
 * in binary
 * @h: va_list argument with value needed
 *
 * Return the number of chracter interger in binary printed to stdout
 */
int print_bin(va_list h)
{
	int num = va_arg(h, int);
	int div = 1, bin = 0, total;

	while (num > 0)
	{
		bin = bin + ((num % 2) * div);
		div *= 10;
		num /= 2;
	}

	total = print_num(bin);
	return (total);
}
