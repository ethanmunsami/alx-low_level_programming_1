/*
 * File: 1-last_digit.c
 * Author: Ethan Munsami
 */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - entry point
 * Description: "Outputs a random number"
 *
 * Return: Always (0)
 */
int main (void)
{
int n, last_digit;
srand(time(0));
n = rand() - RAND_MAX / 2;
last_digit = n % 10;

if (last_digit > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
}
else if (last_digit < 6 && last_digit != 0)
{
printf("Last digit of %d is %d and is less than 6\n", n, last_digit);
}
else if (last_digit == 0)
{
printf("Last digit of %d is %d and is zero\n", n, last_digit);
}
return (0);
}