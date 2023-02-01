#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: pointer to the listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *m;

	if (head == NULL)
		return;

	while (*head)
	{
		m = (*head)->next;
		free(*head);
		*head = m;
	}

	*head = NULL;
}
