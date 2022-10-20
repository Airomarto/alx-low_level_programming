#include "main.h"
/**
 * times_table - Prints the 9-times table
 * starting with 0
 * Return: 10 x 10 (a x b) array
 */
void times_table(void)
{
	int a, b, prod;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			prod = a * b;
			if (b == 0)
			{
				_putchar('0' + prod);
			}
			else if (prod < 10)													{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + prod);
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + (prod / 10));
				_putchar('0' + (prod % 10));											}
		}
		_putchar('\n');
	}
}
