#include "lists.h"
#include <stdlib.h>

/**
  * free_list - Function frees a linked list
  *
  * @head: The pointer to the first node of linked list
  */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}

	free(head);
}
