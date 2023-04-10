#include "main.h"
#include <stdio.h>

/**
 * print_binary - print binary representation of a number
 * @n: decimal number to print 
 */
void print_binary(unsigned long int n)
{
	unsigned long int tt;
	int sh;

	if (n == 0)
	{
		_putchar("0");
		return;
	}

	for (tt = n, sh = 0; (tt >>= 1) > 0; sh++);

	for (; sh >= 0; sh--)
	{
		if ((n >> sh) & 1)
			_putchar("1");
		else
			_putchar("0");
	}
}
