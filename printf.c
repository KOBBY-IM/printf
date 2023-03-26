#include "main.h"

/**
 * _printf - Function to print formatted string to stdout like printf
 * @format: Pointer to string
 *
 * Return: Number of characters printed to  stdout
 */
int _printf(const char *format, ...)
{
	va_list head;
	int i = 0, counter = 0, n = 9, j;
	fmt spec[] = {{'c', print_char}, {'s', print_str}, {'i', print_int},
	{'d', print_int}, {'b', print_bin}, {'u', print_unsign}, {'o', print_octal},
	{'x', print_hexa}, {'X', print_heXa}};

	va_start(head, format);
	if (format == NULL)
		return (-1);
	while (format[i])
	{
		if (format[i] == '%')
		{
			for (j = 0; j < n; j++)
			{
				if (format[i + 1] == spec[j].c)
				{
					counter += spec[j].f(head);
					i += 2;
					break;
				}
				else if (format[i + 1] == '%')
				{
					counter += _putchar('%');
					i += 2;
					break;
				}
				else if (j == (n - 1))
				{
					counter += _putchar(format[i++]);
				}
			}
			continue;
		}
		counter += _putchar(format[i]);
		i++;
	}
	return (counter);
}
