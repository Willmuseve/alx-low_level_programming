#include "lists.h"
/**
 * add_dnodeint_end - adds node at end
 * @head: head address of linked list
 * @n: number of new value for new node
 * Return: address of new node or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *t, *w;

	t = *head;
	w = malloc(sizeof(dlistint_t));
	if (w == NULL)
		return (NULL);
	w->next = NULL;
	w->prev = NULL;
	w->n = n;
	if ((*head) == NULL)
	{
		*head = w;
		return (w);
	}
	while (t->next)
	{
		t = t->next;
	}
	w->prev = t;
	t->next = w;
	return (w);
}
