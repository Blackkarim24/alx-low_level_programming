#include "main.h"

/**
* _strcpy_ function that copies the string
pointed by src,  include
* terminate null byte (\0), to the buffer
* pointed to by dest
* @dest: the first parameter
* @src: second parameter
*/

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (*(src + i))
	{
		i++;
	}
	*(dest + i) = '\0';
	i--;
	while (i >= 0)
	{
		*(dest + i) = *(src + i);
		i--;
	}
	return (dest);
}
