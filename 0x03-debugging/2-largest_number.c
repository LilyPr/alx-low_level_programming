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
	int a, b, c;

	printf("a = 972");
	scanf("%d", &a);

	printf("b = -98");
	scanf("%d", &b);

	printf("c = 0");
	scanf("%d", &c); 

	if (a > b && b > c)
	{
		printf("Largest number = %d \n",a);
	}
	else if (b > a && a > c)
	{
		printf("Largest number = %d \n",b);
	}
	else
	{
		printf("Largest number = %d \n",c);
	}

	return (0);
}
