#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_hex - convert a given unsigned int to hex lower upper
 * @list: parameter from va_list
 * @islower: 1 if lowercase, 0 if uppercase
 * Return: number of digits printed
 */
int print_hex(va_list list, int islower)
{
	unsigned int num, remainder;
	int i, j = 0;
	char hexdec[8];

	num = va_arg(list, unsigned int);
	if (num == 0)
		return (_putchar('0'));

	while (num != 0)
	{
		remainder = num % 16;
		if (remainder < 10)
		{
			hexdec[j] = 48 + remainder;
		}
		else
		{
			if (islower == 0)
				hexdec[j] = 55 + remainder;
			else if (islower == 1)
				hexdec[j] = 55 + remainder + 32;
		}
		j++;
		num = num / 16;
	}

	/* print in reverse */
	i = j - 1;
	while (i >= 0)
	{
		_putchar(hexdec[i]);
		i--;
	}
	return (j);
}

/**
 * print_hex_upper - convert a given unsigned int to hexadecimal (caps)
 * @list: parameter from va_list
 * Description: convert a given unsigned int to hexadecimal
 *(capital letters ABCDEF)
 * Return: number of integers
 */

int print_hex_upper(va_list list)
{
	return (print_hex(list, 0));
}

/**
 * print_hex_lower - convert a given unsigned int to hexadecimal (lower)
 * @list: parameter from va_list
 * Description: convert a given unsigned int to hexadecimal
 *(lowercase letters abcdef)
 * Return: number of integers
 */

int print_hex_lower(va_list list)
{
	return (print_hex(list, 1));
}
