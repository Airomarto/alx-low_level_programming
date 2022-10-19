#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char t = 48;

	while (t <= 57)
	{
		putchar(t);
		t++;
	}
	t = 97;
	while (t <= 102)
	{
		putchar(t);
		t++;
	}
	putchar(10);
	return (0);
}
