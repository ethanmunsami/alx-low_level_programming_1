/*
 * File: 6-print_numberz.c
 * Auth: Ethan Munsami
 */

#include <stdio.h>

/**
 * main - entry point
 * Description: Prints all single digit numbers of base 10
 * Return: Always 0.
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		putchar((n % 10) + '0');

	putchar('\n');

	return (0);
}
