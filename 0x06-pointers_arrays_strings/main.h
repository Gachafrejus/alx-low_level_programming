#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
/**
 * void prototypes()
 * int prototypes()
 * char prototypes()
 */

int _strcmp(char *s1, char *s2);
void print_number(int n);
void print_buffer(char *b, int size);
void reverse_array(int *a, int n);
char *infinite_add(char *n1, char *n2, char *r, int size_r);
char *_strcat(char *dest, char *src);
char *string_toupper(char *);
char *cap_string(char *);
char *leet(char *);
char *rot13(char *);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
char *add_strings(char *n1, char *n2, char *r, int r_index);

#ifend /* MAIN_H */
