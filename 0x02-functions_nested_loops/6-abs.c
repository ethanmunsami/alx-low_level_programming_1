/*
 * File: 6-abs.c
 * Author: Ethan Munsami
 */

#include "main.h"
#include <stdio.h>


/**
  * print_sign - "Prints the sign of a number"
  *
  * Return: 1 for positive num, -1 for negative num or 0 for anything else
  */
int _abs(int n)
{
	int x;
	
	if (n > 0)
	{
		x = abs(n);
		return (x);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (0);
	}
}
