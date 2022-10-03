#include "main.h"

/**
 * *_strpbrk - function searches string for set of bytes
 *
 *@s: char * pointer
 *@accept: char * pointer
 * Return: s
 */

char *_strpbrk(char *s, char *accept)
{
	char *f = accept;
	int store = 0;

	while (*s)
	{
		while (*(f + store))
		{
			if (*s == *(f + store))
			{
				return (s);
			}
			store++;
		}
		store = 0;
		s++;
	}
	return (0);
}
