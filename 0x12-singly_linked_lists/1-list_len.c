#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * list_len - Fucntion returns the number of elements in a list
  *
  * @h: A linked list
  *
  * Return: The number of elements
  */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}

	return (count);
}
