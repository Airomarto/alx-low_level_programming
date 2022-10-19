#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 depicting success after execution
 */
int main(void)
{
	int n;
	int last_digit;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Enter number = ");
	scanf("%d", &n);

	last_digit = (n % 10);
	if (last_digit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
	}
	else if (last_digit == 0)
	{
		printf("Last digit of %d is %d and is zero\n", n, last_digit);
	}
	else
	{	printf("Last digit of %d is %d and is less than 5\n", n, last_digit);
	}
	return (0);
}