#include "main.h"
/**
 * _puts - prints a string to stdout
 * @str: string
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_puts(*str);
		str++;
	}
	_putchar('\n');
}
