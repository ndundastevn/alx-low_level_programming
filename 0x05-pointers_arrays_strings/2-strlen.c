#include "main.h"
#include <string.h>
/*
 *_strlen: returns the length of string
 *@s: character to check
 *Description: check the lenght of string
 *return: success
 */

int _strlen(char *s)
{
  int len;
  len = strlen(*s);

  return len;
}
