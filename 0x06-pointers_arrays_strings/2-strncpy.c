#include "main.h"
/**
  * *_strncpy - copies at most n bytes of the string pointed
  * to by the src to the dest
  * @src: the string to copy
  * @dest: the string to be copied to
  * @n: the number of bytes to copy
  * Return: pointer to the test string
  */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
