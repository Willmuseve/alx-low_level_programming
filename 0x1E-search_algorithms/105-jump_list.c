#include "search_algos.h"

/**
 * jump_list - Searching for an algorithm in a sorted singly linked
 * list of integers using jump search.
 * @list: A pointer to the  head of the linked list to search.
 * @size: The number of nodes in the list.
 * @value: The value to search
 * Return: If the value is not present or the head of the list is NULL
 * Description: Prints a value every time it is compared in the list.
 * Uses the square root of the list size as the jump step.
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step, step_size;
	listint_t *nod, *jump;

	if (list == NULL || size == 0)
		return (NULL);

	step = 0;
	step_size = sqrt(size);
	for (nod = jump = list; jump->index + 1 < size && jump->n < value;)
	{
		nod = jump;
		for (step += step_size; jump->index < step; jump = jump->next)
		{
			if (jump->index + 1 == size)
				break;
		}
		printf("Value checked at index [%ld] = [%d]\n", jump->index, jump->n);
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			nod->index, jump->index);
	for (; nod->index < jump->index && nod->n < value; nod = nod->next)
		printf("Value checked at index [%ld] = [%d]\n", nod->index, nod->n);
	printf("Value checked at index [%ld] = [%d]\n", nod->index, nod->n);

	return (nod->n == value ? nod : NULL);
}