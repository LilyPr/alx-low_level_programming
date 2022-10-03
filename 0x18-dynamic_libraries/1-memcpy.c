#include "main.h"

/**
 * *_memcpy - function copies memory area
 *
 *@dest: char * pointer
 *@src: char * pointer
 *@n: unsigned int of bytes
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int store = 0;

	while (store < n)
	{
		*(dest + store) = *(src + store);
		store++;
	}
	return (dest);
}
