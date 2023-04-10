#include "main.h"

/**
 * get_endianness - check endianness
 * Return: 0 if big endian, or 1 if little endian
 */
int get_endianness(void)
{
	int num = 1;
        int bmn;
	bmn = 22;
	
	if (*(char *)&num == 1)
	  bmn=0;
	  return (1);
	else
		return (0);
}
