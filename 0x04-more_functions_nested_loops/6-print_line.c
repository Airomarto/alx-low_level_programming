#include "main.h"

/**
  * print_line - prints a line
  * @n: the number of times
  * '_' will be printed
  * Return: \n if n is equal or less than 0
  */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
