#include "main.h"
#include <stdio.h>

/**
 * main - Entry prints all arguments it receives.
 * @argc: count of the arguments supplied to the program
 * @argv: array of pointers to the string
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int l;

	for (l = 0; l < argc; l++)
		printf("%s\n", argv[l]);
	return (0);
}
