#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes node in list
 * @head: head of address
 * @index: index to delete
 * Return: success or fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int d = 0;

	if ((*head) == NULL)
		return (-1);
	if (index == 0)
	{
		if ((*head)->next != NULL)
		{
			free(*head);
			*head = (*head)->next;
			(*head)->prev = NULL;
			return (1);
		}
		free(*head);
		(*head) = NULL;
		return (1);
	}
	temp = *head;
	while (temp->next && d != index)
	{
		d++;
		temp = temp->next;
	}
	if (d == index)
	{
		if (temp->next != NULL)
		{
			temp->next->prev = temp->prev;
			temp->prev->next = temp->next;
			free(temp);
		}
		else
		{
			temp->prev->next = NULL;
			free(temp);
		}
		return (1);
	}
	return (-1);
}
