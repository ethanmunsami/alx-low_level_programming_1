#include "main.h"
#include <stdio.h>

int check_prime(int n, int i);

/**
  * is_prime_number - Fucntion returns if a number is a prime number
  *
  * @n: the number to be checked
  *
  * Return: Int value
  */
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
  * check_prime - Fucntion checks if a number is a prime number
  *
  * @n: the number to be checked
  * @i: the iteration times
  *
  * Return: 0 for non-prime and 1 for prime
  */
int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);

	if (n % i == 0 && i > 1)
		return (0);

	if ((n / i) < i)
		return (1);

	return (check_prime(n, i + 1));
}
