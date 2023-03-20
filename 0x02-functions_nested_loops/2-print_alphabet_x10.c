/*
 * File: 2-print_alphabet_x10.c
 * Author: Ethan Munsami
 */

#include "main.h"

/**
 * main - entry point
 * Description: "Prints the alphabet 10 times"
 */
void print_alphabet_x10(void)
{
	int count = 0;
	char ch;

	while (count++ <= 9)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
