#include "main.h"

/**
 * *_strncat - function concatenates two strings
 *
 *@src: char pointer
 *@dest: char pointer
 *@n: int for bytes
 *
 * Return: 0
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len = _strlen(dest);
	int b;

	for (b = 0 ; b < n && src[b] != '\0' ; b++)
		dest[dest_len + b] = src[b];
	dest[dest_len + b] = '\0';

	return (dest);
}
