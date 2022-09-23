#include "main.h"
/**
* string_toupper -> converting any string to upper case
* @x: string param
* Return: string
*/
char *string_toupper(char *x)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}
}
