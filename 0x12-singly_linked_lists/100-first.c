#include <stdio.h>

void first(void) __attribute__ ((constructor));

void first(void)
{
	printf("You are beat! and yet, you must allow,\nI bore my house upon my back!\n");
	/*printf("");*/
}
