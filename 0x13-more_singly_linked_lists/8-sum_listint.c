#include <stdlib.h>
#include "lists.h"

/**
  * sum_listint - Function that returns the sum of all the data,
  * (n) of a linked list
  *
  * @head: The head of the linked list
  *
  * Return: The sum of all data in the linked list
  */

int sum_listint(listint_t *head)
{
	int amount = 0;

	if (head)
	{
		while (head)
		{
			amount += head->n;
			head = head->next;
		}
	}

	return (amount);
}
