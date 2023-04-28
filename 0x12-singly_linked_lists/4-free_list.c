#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: pointer to the first element of the list_t list to be freed
 *
 * This function frees all the memory allocated for a linked list, including
 * the memory allocated for the strings in each node.
 */
void free_list(list_t *head)
{
	list_t *current = head;

	while (current != NULL)
	{
		list_t *next = current->next;

		free(current->str);
		free(current);
		current = next;
	}
}
