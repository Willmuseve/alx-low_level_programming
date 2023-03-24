#include "lists.h"
/**
 * free_dlistint - frees list
 * @head: head of list to free
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *m;

	m = head;
	while (m != NULL)
	{
		free(m);
		m = m->next;
	}
}
