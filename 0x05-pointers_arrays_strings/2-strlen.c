#include "main.h"
#include <string.h>
/*
 *_strlen: returns the length of string
 *@s: character to check
 *Description: this will return the length of a string
 *return: success
 */

int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}
