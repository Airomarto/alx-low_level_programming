#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times '\' is printed
 */
void print_diagonal(int n)
{
	int i, a;

	if (n > 0)
	{
		for (i = 1; i <= n ; i++)
		{
			for (a = 1; a < i; a++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
