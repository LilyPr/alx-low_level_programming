#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	printf(" a = 972");
	scanf("%d", &a);

	printf(" b = -98");
	scanf("%d", &b);

	printf(" b = -98");
	scanf("%d", &c);

	if (a > b && b > c)
	{
		printf("%d is the largest number\n", a);
	}
	else if (b > a && a > c)
	{
		printf("%d is the largest number\n", b);
	}
	else
	{
		printf("%d is the largest number\n", c);
	}

	return (largest);
}
