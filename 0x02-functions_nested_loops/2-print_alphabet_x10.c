/*
 * File: 2-print_alphabet_x10.c
 * Author: Ethan Munsami
 */

#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - "Prints the alphabet 10 times"
 */
void print_alphabet_x10(void)
{
	int count = 0;
	char ch;

	while (count++ <= 9)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			putchar(ch);
		putchar('\n');
	}
}
