#include "main.h"
/**
  * print_number - to print integers
  * @n: number to print
  * Return: 0
  */
void print_number(int n)
{
	int i, j, k, l;

	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}
	i = n / 1000000000;
	j = (n / 1000000) % 1000;
	k = (n / 1000) % 1000;
	l = n % 1000;
	if (i > 0)
	{
		_putchar(i + '0');
		_putchar(j / 100 + '0');
		_putchar((j / 10) % 10 + '0');
		_putchar(j % 10 + '0');
	}
	if (k > 0)
	{
		if (i > 0)
		{
			_putchar(',');
			_putchar(' ');
		}
		_putchar(k / 100 + '0');
		_putchar((k / 10) % 10 + '0');
		_putchar(k % 10 + '0');
	}
	if (l > 0)
	{
		if (i > 0 || k > 0)
		{
		_putchar(',');
		_putchar(' ');
		}
	_putchar(l / 100 + '0');
	_putchar((l / 10) % 10 + '0');
	_putchar(l % 10 + '0');
	}
}
