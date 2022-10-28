#include "main.h"

/**
  * *_strncat - to concatenate two strings
  * @src: the string to append
  * @dest: to string to be appended to
  * @n: number of bytes to append
  * Return: return pointer to the dest string
  */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; src[j] != src[n]; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
