#include "main.h"

/**
 * *_strcat - function concatenates two strings
 *
 *@src: char pointer
 *@dest: char pointer
 *
 * Return: 0
 */

char *_strcat(char *dest, char *src)
{
	int dest_len = _strlen(dest);
	int num;
	int n = _strlen(src);

	for (num = 0 ; num < n && src[num] != '\0' ; num++)
		dest[dest_len + num] = src[num];
	dest[dest_len + num] = '\0';

	return (dest);
}
