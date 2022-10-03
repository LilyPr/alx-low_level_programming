#include "main.h"

/**
 * _strlen - function returns length of a string
 *
 *@s: char point
 *
 * Return: 0
 */

int _strlen(char *s)
{
	char *copy_s = s;
	int hello = 0;

	while (*copy_s != '\0')
	{
		hello++;
		copy_s++;
	}
	return (hello);
}
