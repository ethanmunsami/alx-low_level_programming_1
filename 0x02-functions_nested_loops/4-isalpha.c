/*
 * File: 4-isalpha.c
 * Author: Ethan Munsami
 */

#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * Description: "Checks for alphabetic characters"
 *
 * Return: "1 if it's a char, 0 if not"
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}

	return (0);
}
