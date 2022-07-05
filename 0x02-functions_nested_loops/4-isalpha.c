/*
 * file 4-isalpha.c
 * By lilian
 */

#include "main.h"

/*
 * a function that checks for alphabetic character.
 * in lowercase or uppercase
 */
int _isalpha(int c)
{
	if((c >= 'a' && c <= 'z') ||
			(c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
