#include "main.h"

/**
 * *_strcat - to concatenate two strings
 * @src: the string to append
 * @dest: the string to be appended to
 * Return: returns a pointer to the dest string
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
