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
	char charVar;
	int intVar;
	long int intLongVar;
	long long int intL2Var;
	float floatVar;
	
	printf("Size of a char: %ld byte(s)\n",sizeof(charVar));
	printf("Size of an int: %ld byte(s)\n",sizeof(intVar));
	printf("Size of a long int: %ld byte(s)\n",sizeof(intLongVar));
	printf("Size of a long long int: %ld byte(s)\n",sizeof(intL2Var);
	printf("Size of a float: %ld byte(s)\n",sizeof(floatVar));

	return (0);
}
