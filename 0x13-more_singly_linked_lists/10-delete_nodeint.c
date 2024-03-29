#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *m = *head;
	listint_t *c = NULL;
	unsigned int x = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(m);
		return (1);
	}

	while (x < index - 1)
	{
		if (!m || !(m->next))
			return (-1);
		m = m->next;
		x++;
	}

	c = m->next;
	m->next = c->next;
	free(c);

	return (1);
}
