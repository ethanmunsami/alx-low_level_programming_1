/*
 * File: 7-print_tebahpla.c
 * Auth: Ethan Munsami
 */

#include <stdio.h>

/**
 * Description: "Prints the alphabet in reverse"
 *
 * Return: Always (0)
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);

	putchar('\n');

	return (0);
}
