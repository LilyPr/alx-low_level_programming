#include "main.h"

/**
 * _atoi - function to convert a string argument to an integer
 * @s: character to a point
 *
 * Return: 0
 */
int _atoi(char *s)
{
	int res = 0;

	for (int i = 0; s[i] != '\0'; ++i)
		res = res * 10 + s[i] - '0';
	return (res);
}
