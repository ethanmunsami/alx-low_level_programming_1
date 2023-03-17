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

	printf("Size of int: %ld bytes\n",sizeof(intVar));
