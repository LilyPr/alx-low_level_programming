#include "main.h"

/**
 * *_strcmp - function compares two strings
 *
 *@s1: char pointer
 *@s2: char pointer
 *
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
	char *nm1 = s1;
	char *nm2 = s2;

	for (; *nm1 != '\0'; nm1++, nm2++)
	{
		if (*nm1 != *nm2)
		{
			return (*nm1 - *nm2);
		}
	}
	return (0);
}
