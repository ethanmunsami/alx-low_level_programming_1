/*
 * File: 1-alphabet.c
 * Author: Ethan Munsami
 */

#include "main.h"

/**
 * main - entry point
 * Description: "Prints the alphabet in lowercase"
 *
 * Return: Always (0)
 */
void print_alphabet(void)
{
	char ch;

	for(ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);

	_putchar('\n');

	return (0);
}
