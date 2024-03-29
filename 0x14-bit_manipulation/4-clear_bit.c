#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: pointer to number 
 * @index: the index starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int ii;
	unsigned int kk = index;
	
	if (index > 64)
		return (-1);
	ii = ~(1 << kk);
	*n = *n & ii;

	return (1);
}
