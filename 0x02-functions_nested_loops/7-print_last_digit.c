/*
 * my fle 7-print_last_digit.c
 */

#include "main.h"

/*
 * Write a function that prints the last digit of a number.
 * Returns the value of the last digit
 */
int print_last_digit(int)
{
	int last_digit = n % 10;
	
	if (last_digit < 0)
		last_digit *= -1;

	_putchar(last_digit + '0');

	return (last_digit);
}
