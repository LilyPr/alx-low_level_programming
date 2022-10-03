#include "main.h"

/**
 * _strspn - function gets length of prefix substring
 *
 *@s: char * pointer
 *@accept: char * pointer
 * Return: s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int byte = 0;
	int lp1 = 0;
	int lp2 = 0;
	int next = 0;

	while (*(s + lp1))
	{
		while (*(accept + lp2))
		{
			if (*(accept + lp2) == *(s + lp1))
			{
				byte++;
			}
			if (*(accept + (lp2 + 1)) == *(s + (lp1)))
			{
				next = 1;
			}
			lp2++;
		}
			if (next != 1)
			{
				break;
			}
			else if (next == 1)
			{
				next = 0;
			}
			lp1++;
			lp2 = 0;
				}
	return (byte);
}
