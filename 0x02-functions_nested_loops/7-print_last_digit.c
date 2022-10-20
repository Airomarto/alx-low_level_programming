#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number x
 *@x: number whose last digit will be printed
 * Return: last digit b of x
 */
int print_last_digit(int x)
{
	int b = x % 10;

	if (x < 0)
	b = b * -1;
		
	_putchar(b + '0');
	return (b);
}
