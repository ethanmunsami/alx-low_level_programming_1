#include <stdlib.h>
#include "lists.h"

/**
  * pop_listint - Function that deletes the head node of a linked list
  *
  * @head: The start of the linked list
  *
  * Return: The heads node data, and (0) if the list is empty
  */

int pop_listint(listint_t **head)
{
	listint_t *new_head;
	int n = 0;

	if (*head != NULL)
	{
		new_head = (*head)->next;
		n = (*head)->n;
		free(*head);
		*head = new_head;
	}

	return (n);
}
