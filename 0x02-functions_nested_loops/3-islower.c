/*
 * File: 3-islower.c
 * Author: Ethan Munsami
 */

#include "main.h"
#include <stdio.h>

/**
 * Description: "Prints 1 if a letter is lowercase"
 *
 * Return: "1 if letter is lowercase and 0 if not"
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}

	return (0);
}
