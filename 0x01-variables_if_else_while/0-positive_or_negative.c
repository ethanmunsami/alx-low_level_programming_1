/*
 * File: 0-positive_or_negative.c
 * Author: Ethan Munsami
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Main: Outputs a random number
 *
 */
int main(void)
{
 srand(time(NULL));
 int n = rand();
 
 if (n < 0) 
    {
        printf("%d is negative\n", n);
    }
    else if (n == 0) {
        printf("%d is zero\n", n);
    }
    else {
        printf("%d is positive\n", n);
    }
}
