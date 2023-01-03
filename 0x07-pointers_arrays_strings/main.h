#ifndef MAIN_H
#define MAIN_H

/**
 * File: main.h
 * Auth: frejus
 * description: header file containing prototype for all functions used in the 0x06-pointers_arrays_strings directory.
 */

#include <stddef.h>

int putchar(char c);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
unsigned int _strspn(char *s, char *accept);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);

#endif

