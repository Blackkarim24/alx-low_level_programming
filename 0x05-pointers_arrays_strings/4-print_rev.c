#include "main.h"

/**
* print_rev - function that prints a string in reverse
* followed by a new line to stdout
* @s: string to print
*/

void print_rev(char *s)
{
	int i, j;
	char c;

	i = 0;
	while (*(s + i))
	{
		i++;
	}
	c = *(s + i - 1);
	j = 1;
	while (c)
	{
		_putchar(c);
		j++;
		c = *(s + i - j);
	}
	_putchar('\n');
}
