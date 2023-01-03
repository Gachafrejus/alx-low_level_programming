/*
 * File: 0-memset.c
 * Auth: not
 */

#include "main.h"

/**
 * _memset - fills thr first n bytes of the memory area
 *          pointed to be @s whit the constant byte @c.
 * @s: A pointer to the memory area to be filled.
 * @c: The character to fill the memory area with.
 * @n: The number of bytes to be filled.
 * description _memset: over there
 *
 * Return: A pointer to the filled memory area @s.
 *
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;
	unsigned char *memory = s, value = c;

	for (index = 0; index < n; index++)
		memory[index] = value;
	
	return (memory);
}
