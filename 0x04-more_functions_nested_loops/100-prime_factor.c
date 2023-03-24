#include <stdio.h>
#include <math.h>

/**
  * main - Prints the largest prime factor of the number 612852475143
  *
  * Return: Always 0
  */
int main(void)
{
	long x, factor;
	long number = 612852475143;
	double square = sqrt(number);

	for (x = 1; x <= square; x++)
	{
		if (number % x == 0)
		{
			factor = number / x;
		}
	}

	printf("%ld\n", factor);

	return (0);
}
