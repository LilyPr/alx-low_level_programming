#ifndef MAIN_H
#define MAIN_H

/**
 * FILE: Main.h
 * Desc: Header file containing prototypes for all functions used in the 0x07-pointers_arrays_strings directory
 */

#include <stddef.h>

int _putchar(char c);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);

#endif
