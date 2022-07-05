#include "main.h"

/**
 * main - Prints the alphabet, in lowercase, followed by a new line.
 * Desc:Function that print alphabet in lowercase followed by new line.
 *
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
