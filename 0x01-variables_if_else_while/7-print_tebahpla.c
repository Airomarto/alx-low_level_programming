#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char t = 122;

	while (t >= 97)
	{
		putchar(t);
		t--;
	}
	putchar(10);
	return (0);
}

