#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - entry adds numbers
 * @argc: number of arguments
 * @argv: argument vector of pointers to strings
 *
 * Return: 0 if no errors, else 1
 */
int main(int argc, char *argv[])
{
	int k, l, sum;

	sum = 0;
	if (argc < 1)
		printf("0\n");
	for (k = 1; k < argc; k++)
	{
		for (l = 0; argv[k][l]; l++)
		{
			if (!isdigit(argv[k][l]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[k]);
	}
	printf("%d\n", sum);
	return (0);
}
