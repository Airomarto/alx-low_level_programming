#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 to depict success after execution
 */

int main(void)
{
	int a;
	long int b;
	long long int c;
	double e;
	char d;
	float f;


	printf("Size of a int: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of an long int: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a double: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(e));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
