/*
 * File: 0-positive_or_negative.c
 * Author: Ethan Munsami
 */

#include <stdio.h>

/*
 * Main: Outputs a random number
 *
 */
int main(void)
{
	int n = rand();
	if (n > 0)
	{
		printf(n, "%d is positive\n");
	} else if (n == 0)
	{
		printf(n, "%d is zero\n");
	} else
	{ 
		printf(n, "%d is negative");
	}
}
