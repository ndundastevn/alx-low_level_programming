#include <stdio.h>
#include <unistd.h>
 
/**
 * main - Entry point for the program
 * Description: perform a series of actions
 * Return: 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
