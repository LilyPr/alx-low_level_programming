#include "main.h"

/**
 * *_strcpy - function copies string pointed by src to buffer pointer dest
 *
 *@dest: char pointer
 *@src: char pointer
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	char *pr = dest;
	char *sc1 = src;

	while (*sc1 != '\0')
	{
		*pr = *sc1;
		sc1++;
		pr++;
	}
	*pr = *sc1;
	return (dest);
}
