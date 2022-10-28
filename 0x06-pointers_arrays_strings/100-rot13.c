#include "main.h"
/**
  * *rot13 - to rotate by 13 places
  * @s: string to be rotated
  * Return: to return a string
  */
char *rot13(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if ((s[i] >= 'a' && s[i] < 'n') || (s[i] >= 'A' && s[i] < 'n'))
			s[i] += 13;
		else if ((s[i] > 'm' && s[i] <= 'z') || (s[i] >= 'M' && s[i] <= 'Z'))
			s[i] -= 13;
	}
	return (s);
}

