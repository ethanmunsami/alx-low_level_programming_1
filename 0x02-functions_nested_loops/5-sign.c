/*
 * File: 5-sign.c
 * Author: Ethan Munsami
 */

#include "main.h"
#include <stdio.h>

/**
 * Description: "Prints the sign of a number"
 *
 * Return: 1 for positive, -1 for negative and 0 for anything else
 */
int print_sign(int n)
{
	if(n > 0)
	{
		putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		putchar(45);
		return (-1);
	}
	else
	{
		putchar(48);
		return (0);
	}
}
