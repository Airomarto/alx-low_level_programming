#include "main.h"

/**
  * print_numbers - prints the list of numbers fro 0 tp 9
  * Return: list of numbers
  */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{

		_putchar('0' + i);
	}
	_putchar('\n');

}
