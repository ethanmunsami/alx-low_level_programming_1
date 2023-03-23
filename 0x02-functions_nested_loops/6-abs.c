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
	if (n > 0)
	{
		return (1);
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
