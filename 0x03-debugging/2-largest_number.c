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

	printf("Input the values of three numbers : ");
	scanf("%d %d %d", &a, &b, &c);
	printf("1st a = %d,\t2nd b = %d,\t3rd c = %d\n", a, b, c);

	if (a > b && b > c)
	{
		printf("%d is the largest number\n", largest);
	}
	else if (b > a && a > c)
	{
		printf("%d is the largest number\n", largest);
	}
	else
	{
		printf("%d is the largest number\n", largest);
	}

	return (largest);
}
