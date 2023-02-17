#include <stdio.h>
#include <unistd.h>
 
/**
* main - Entry point for the program
* Description: perform a series of actions
* Return: 0 
*/ 
int main(void)
{
int b;
for (b = 'z'; b >= 'b'; b--)
{
putchar(b);
}
putchar('\n'); 
return (0);
}
