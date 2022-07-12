#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: The string to be printed.
 */
void print_rev(char *s)
{
	int i, len = 0;

	while (s[i++])
		len++

	for (i = len - 1; i >= 0;)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
