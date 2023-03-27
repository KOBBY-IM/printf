#include "main.h"

/**
 * print_p - Function that prints value of a (void *) in hexadecimal(base(16))
 * to stdout
 * @h: va_list argument with value needed
 *
 * Return: Number of hexadecimal characters printed to stdout
 */
int print_p(va_list h)
{
	unsigned int *num = (unsigned int *)va_arg(h, void *);
	int total = 0, hex[12], i = 0;

	while (*num > 0)
	{
		hex[i] = *num % 16;
		if (hex[i] < 10)
			hex[i] += '0';
		else
			hex[i] += ('a' - 10);
		*num /= 16;
		i++;
	}
	for (--i; i >= 0; i--)
		total += _putchar(hex[i]);
	return (total);
}

/**
 * print_S - Function to print a string to stdout
 * Description: Non printable characters (0 < ASCII value < 32 or >= 127) are
 * printed this way: \x, followed by the ASCII code value in hexadecimal (upper
 * case - always 2 characters)
 * @h: va_list argument with value needed
 *
 * Return: Number of Characters printed to stdout
 */
int print_S(va_list h)
{
	int pSi = 0, counter = 0;
	char *S;

	S = (va_arg(h, char *));
	if (S == NULL)
		S = "(null)";
	while (S[pSi])
	{
		if ((S[pSi] >= 0 && S[pSi] <= 32) || S[pSi] >= 127)
		{
			counter += _putchar('\\');
			counter += _putchar('x');
			if (S[pSi] < 16)
			{
				counter += _putchar('0');
				if (S[pSi] < 10)
					counter += _putchar(S[pSi++] + '0');
				else
					counter += _putchar(S[pSi++] + 55);
			}
			else
			{
				if ((S[pSi] / 16) < 10)
					counter += _putchar((S[pSi] / 16) + '0');
				else if ((S[pSi] / 16) >= 10)
					counter += _putchar((S[pSi] / 16) + 55);
				if ((S[pSi] % 16) < 10)
					counter += _putchar((S[pSi] % 16) + '0');
				else if ((S[pSi] % 16) >= 10)
					counter += _putchar((S[pSi] % 16) + 55);
				pSi++;
			}
		}
		else
			counter += _putchar(S[pSi++]);
	}
	return (counter);
}
