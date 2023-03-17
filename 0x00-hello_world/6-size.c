/*
 * File 6-size.c
 * Author: Ethan Munsami
 */

#include <stdio.h>

/**
 * main - entry point
 * Description: Function outputs the size of variables
 * Return: Always (0)
 */
int main(void)
{
	int intVar;
	float floatVar;
	double doubleVar;
	char charVar;

	printf("Size of char: %ld byte(s)\n",sizeof(charVar));
	printf("Size of int: %ld byte(s)\n",sizeof(intVar));
	printf("Size of double: %ld byte(s)\n",sizeof(doubleVar));
	printf("Size of float: %ld byte(s)\n",sizeof(floatVar));
	
	
	return (0);
}
