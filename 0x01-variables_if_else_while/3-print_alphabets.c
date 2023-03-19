/*
 * File: 3-print_alphabets.c
 * Author: Ethan Munsami
 */
#include <stdio.h>
/**
 * main - entry point
 * Description: "Prints alphabet in lowercase and uppercase"
 *
 * Return: Always (0)
 */
int main(void)
{
	char ch = 'a';
	/*char ch2 = 'A';*/

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	/*for (ch2 = 'A'; ch2 <= 'Z'; ch2++)
	{
		putchar(ch2);
	}*/
	putchar('\n');
}
