#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;
	listint_t *w;
	listint_t *m = *head;

	w = malloc(sizeof(listint_t));
	if (!w || !head)
		return (NULL);

	w->n = n;
	w->next = NULL;

	if (idx == 0)
	{
		w->next = *head;
		*head = w;
		return (w);
	}

	for (x = 0; m && x < idx; x++)
	{
		if (x == idx - 1)
		{
			w->next = m->next;
			m->next = w;
			return (w);
		}
		else
			m = m->next;
	}

	return (NULL);
}
