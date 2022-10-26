#include "main.h"

/**
  * more_numbers - print 10 times the numbers
  * from 0 to 14
  * Return: list of numbers
  */

void more_numbers(void)
{
	int i;
	int a;

	for (i = 0; i < 10; i++)
	{
		for (a = 0; a < 15; a++)
		{
			if (a > 9)
			{
				_putchar('0' + (a / 10));
			}
			_putchar('0' + (a % 10));
		}
		_putchar('\n');
	}
}
