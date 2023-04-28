#include <stdlib.h>
#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list
 * @h: pointer to the list_t list
 *
 * Return: number of elements in h
 */

size_t list_len(const list_t *h)
{
	/* Initialize a counter variable to 0 */
	size_t count = 0;

	/* Loop through the list, incrementing the counter for each node */
	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	/* Return the final count */
	return (count);
}
