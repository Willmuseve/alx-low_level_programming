#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: listint_t list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *m;

	while (head)
	{
		m = head->next;
		free(head);
		head = m;
	}
}
