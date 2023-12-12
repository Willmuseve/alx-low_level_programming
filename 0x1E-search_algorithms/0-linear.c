#include <stdio.h>
#include "search_algos.h"


/**
 * linear_search - Search for a value in an array using
 * linear search algorithm.
 * @array: Pointer to the first element of the array.
 * @size: Number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index of the value if found,
 * or -1 if not found or array is NULL.
 */

int linear_search(int *array, size_t size, int value)
{
	size_t y;

	if (array == NULL || !(*array))
	{
		return (-1);
	}

	for (y = 0; y < size; y++)
	{
		if (array[y] == value)
		{
			printf("Value checked array[%lu] = [%d]\n", y, array[y]);
			return (y);
		}
		printf("Value checked array[%lu] = [%d]\n", y, array[y]);
	}

	return (-1);
}
