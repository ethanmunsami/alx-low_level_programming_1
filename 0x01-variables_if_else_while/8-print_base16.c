/*
 * File: 8-print_base16.c
 * Auth: Ethan Munsami
 */

#include <stdio.h>

/**
 * main - entry point
 * Description: "Prints numbers of base 16"
 * Return: Always 0.
 */
int main(void)
{
	int n;
	char ch;

	for (n = 0; n < 10; n++)
		putchar((n % 10) + '0');

	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);

	putchar('\n');

	return (0);
}
