/*
 * File: 4-print_alphabt.c
 * Author: Ethan Munsami
 */
#include <stdio.h>
/**
 * main - entry point
 * Description: "Prints the alphabet except q and e"
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
	}
	putchar('\n');
}

