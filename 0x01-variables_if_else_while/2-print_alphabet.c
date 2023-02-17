#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 * Description: print the alphabet in lowercase always
 * Return: 0 
*/
int main(void)
{
int num;
for (num = 'a'; num <= 'z'; num++)
{
putchar(num);
}
putchar('\n');
 return (0);}
