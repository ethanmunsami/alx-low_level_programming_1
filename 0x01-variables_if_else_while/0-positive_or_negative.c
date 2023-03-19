/*
 * File: 0-positive_or_negative.c
 * Author: Ethan Munsami
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * Main: Outputs a random number
 *
 */
int main(void)
{

int n;
srand(time(0));
n = rand() - RAND_MAX / 2;

if (n < 0)
    {
        printf("%d is negative\n", n);
    }
    else if (n == 0)
    {
        printf("%d is zero\n", n);
    }
    else
    {
        printf("%d is positive\n", n);
    }
    return (0);
}
