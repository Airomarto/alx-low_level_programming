#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int b = '0';

	while (b <= '9')
	{
		putchar(b);
		if (b != '9')
		{

			putchar(',');
																		putchar(' ');
																	}
		b++;
	}
	putchar('\n');
	return (0);
}
