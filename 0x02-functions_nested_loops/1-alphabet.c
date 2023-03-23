/*
 * File: 1-alphabet.c
 * Author: Ethan Munsami
 */

#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - "Prints the alphabet in lowercase"
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);

	putchar('\n');
}
