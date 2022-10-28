#include "main.h"
/**
  * _strcmp - compare two strings
  * @a: string to be comared with
  * @b: string to be compared
  * Return: -ve int if (*a < *b), 0 if (*a = *b) and +ve int
  * if (*a > *b)
  */
int _strcmp(char *a, char *b)
{
	while (*a != '\0' || *b != '\0')
	{
		if (*a != *b)
			return (*a - *b);
		a++;
		b++;
	}
	return (0);
}
