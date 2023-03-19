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
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
putchar('\n');
}
