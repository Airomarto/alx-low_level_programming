#include "main.h"

/**
  * print_most_numbers - prints numbers from 0 t0 9 excluding 2 and 4
  * Return: the specified list of numbers
  */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (!(i = 2 && i = 4))
		{
			_putchar('0' + i);
		}
	}
	_putchar('\n');
}
