#include <stdio.h>
#include "main.h"

/**
 * main - prints the largest of 3 integers
 * Return: 0
 */

int main(void)
{
	int a, b, c;

	a = 972;
	b = -98;
	c = 0;

	printf(" a = 972");
	scanf("%d", &a);

	printf(" b = -98"); 
	scanf("%d", &b);

	printf(" c = 0");
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

	return (0);
}
