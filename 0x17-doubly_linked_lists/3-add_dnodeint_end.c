#include "lists.h"
/**
 * add_dnodeint_end - adds node at end
 * @head: head address of linked list
 * @n: number of new value for new node
 * Return: address of new node or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *t, *new;

	t = *head;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->next = NULL;
	new->prev = NULL;
	new->n = n;
	if ((*head) == NULL)
	{
		*head = new;
		return (new);
	}
	while (t->next)
	{
		t = t->next;
	}
	new->prev = t;
	t->next = new;
	return (new);
}
