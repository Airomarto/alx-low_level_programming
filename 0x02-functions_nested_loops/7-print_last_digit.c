#include "main.h"
/**
 * main - Entry point
 *
 * Return: 0 depicting success after execution
 */
int main(void)
{
	int n;
	int last_d;

	last_d = (n % 10);
	if (last_d < 0)
		last_d = last * -1;
		
	putchar(last_d + '0');
	return (last_d);
}
