#include "holberton.h"

/**
  * factorial - Fucntion calculates the factorial of a number
  * @n: The number 
  *
  * Return: Int value
  */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n <= 1)
		return (1);

	return (n * factorial(n - 1));
}
