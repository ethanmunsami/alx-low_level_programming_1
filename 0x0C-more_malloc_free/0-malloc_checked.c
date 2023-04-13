#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * malloc_checked - Function allocates memory
  *
  * @b: The size to allocate
  *
  * Return: The variable i
  */

void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);

	if (i == NULL)
		exit(98);

	return (i);
}
