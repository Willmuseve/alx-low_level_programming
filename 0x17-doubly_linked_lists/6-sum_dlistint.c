#include "lists.h"
/**
 * sum_dlistint - sums up values of linked list
 * @head: head of address to get sum
 * Return: sum value
 */
int sum_dlistint(dlistint_t *head)
{
	const dlistint_t *t;
	int s = 0;

	t = head;
	while (t != NULL)
	{
		s += t->n;
		t = t->next;
	}
	return (s);
}
