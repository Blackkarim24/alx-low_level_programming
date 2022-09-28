#include "main.h"

/**
* _puts_recursion - function that print a string followed by a new line
* @s: string to put
* Return: void
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
