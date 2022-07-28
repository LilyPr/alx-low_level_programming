#include "main.h"
#include <stdio.h>

/**
 * main - program that prints its name, followed by a new line
 * @argc: count of the arguments supplied to the program
 * @argv: array of pointers to the strings
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int k;

	for (k = 0; k < argc; k++)
	{
		printf("%s\n", argv[k]);
	}
	return (0);
}
