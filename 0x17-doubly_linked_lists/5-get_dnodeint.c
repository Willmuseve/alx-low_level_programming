#include "lists.h"
/**
 * get_dnodeint_at_index - inserts node at index
 * @head: head address of linked list
 * @index: index of list to go
 * Return: address of new node inserted or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *p;
	unsigned int d = 0;

	p = head;
	if (head == NULL)
		return (NULL);
	while (p != NULL && d != index)
	{
		d++;
		p = p->next;
	}
	if (index == d)
		return (p);
	else
		return (NULL);
}
