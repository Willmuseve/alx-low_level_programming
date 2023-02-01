#include "lists.h"

/**
 * free_listp2 - frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */
void free_listp2(listp_t **head)
{
	listp_t *temp;
	listp_t *curr;

	if (head != NULL)
	{
		curr = *head;
		while ((temp = curr) != NULL)
		{
			curr = curr->next;
			free(temp);
		}
		*head = NULL;
	}
}

/**
 * free_listint_safe - frees a linked list.
 * @h: head of a list.
 *
 * Return: size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t s = 0;
	listp_t *hptr, *w, *add;
	listint_t *c;

	hptr = NULL;
	while (*h != NULL)
	{
		w = malloc(sizeof(listp_t));

		if (w == NULL)
			exit(98);

		w->p = (void *)*h;
		w->next = hptr;
		hptr = w;

		add = hptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (*h == add->p)
			{
				*h = NULL;
				free_listp2(&hptr);
				return (s);
			}
		}

		c = *h;
		*h = (*h)->next;
		free(c);
		s++;
	}

	*h = NULL;
	free_listp2(&hptr);
	return (s);
}
