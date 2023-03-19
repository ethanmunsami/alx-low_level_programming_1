/*
* File: 2-print_alphabet.c
* Author: Ethan Munsami
*/

#include <stdio.h>
/**
* main - entry point
* Description: "Prints the alphabet in lower case"
*
*Return: Always (0)
*/
int main(void)
{
char ch = 'a';

for (ch='a'; ch<='z'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
