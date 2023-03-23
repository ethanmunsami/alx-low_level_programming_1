/*
 * File: 1-alphabet.c
 * Author: Ethan Munsami
 */

#include "main.h"
#include <stdio.h>

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
		putchar(ch);

	putchar('\n');
}
