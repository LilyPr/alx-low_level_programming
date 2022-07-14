#include <stdio.h>

/**
 * main - add one line to this code so that the program prints a[2] = 98
 *
 * Return: Always 0
 */
int main(void)
{
	int n;
	int a[2];
	int *p;

	a[2] = 1024;
	p = &n;
	*(p + 2) = 98;
	
	/* this is code display output*/
	printf("a[2] = %d\n", a[2]);
	return (0);
}
