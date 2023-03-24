#include "lists.h"
/**
 * dlistint_len - length of linked list
 * @h: head of list
 * Return: size_t value
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *t;
	int count = 0;

	t = h;
	while (t != NULL)
	{
		count++;
		t = t->next;
	}
	return (count);
}
