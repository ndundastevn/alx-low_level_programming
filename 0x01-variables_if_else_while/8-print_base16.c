#include <stdio.h>
#include <unistd.h>
 
/**
 * main - Entry point for the program
 * Description: perform a series of actions
 * Return: 0
*/
int main(void)
{
char c;
char d = '0';
while (d <= '9')
{
putchar(d);
d++;
}
for (c = 'a'; c <= 'f'; c++)
{
putchar(c);
}
putchar('\n');
return (0);
}
