#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - prints a linked list, safely
 * @head: list of type listint_t to print
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t m = 0;
	long int i;

	while (head)
	{
		i = head - head->next;
		m++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (i > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}

	return (m);
}
