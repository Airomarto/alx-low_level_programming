#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: o depicting success after execution
 */
int main(void)

{
	char f;

	putchar("Lower (lower) case characters:\n");
	for (f = 'a'; f <= 'z'; f++)
	putchar("%c ", f);

	putchar("\n\nCapital case characters:\n");
	for (f = 'A'; f <= 'Z'; f++)
	putchar("%c ", f);

	return (0);
}
