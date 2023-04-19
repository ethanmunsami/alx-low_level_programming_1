#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * op_add - Function adds two integers
  *
  * @a: The first int
  * @b: The second int
  *
  * Return: The sum of the two integers
  */

int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - Function subtracts an integer from another
  *
  * @a: The first integer
  * @b: The second integer
  *
  * Return: The difference of the two numbers
  */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - Function multiplies two integers
  *
  * @a: The first integer
  * @b: The second integer
  *
  * Return: The product of the two integers
  */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - Function divides an integer by another integer
  *
  * @a: The first integer
  * @b: The second integer
  *
  * Return: The quotient of the two numbers
  */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
  * op_mod - Function returns the remainder of the division
  *
  * @a: The first integer
  * @b: The second integer
  *
  * Return: The remainder of the division of two integers
  */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
