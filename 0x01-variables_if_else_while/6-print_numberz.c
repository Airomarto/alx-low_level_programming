#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int e = '0';

	while (e <= '9')
	{
		putchar(e);
		e++;
	}
	putchar('\n');
	return (0);
}
