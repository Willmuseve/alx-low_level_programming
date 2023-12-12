#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search -a function that searches for a value in an array of
 * integers using the Linear search algorithm
 * @array: array
 * @size: the size of array
 * @value: value to search
 * Return: Exit 
 */

int linear_search(int *array, size_t size, int value)
{
	size_t y;

	if (array == NULL)
	{
		return (-1);
	}

	for (y = 0; y < size; y++)
	{
		printf("Value checked array[%li] = [%i]\n", y, array[y]);
		if (array[y] == value)
		{
			return (y);
		}
	}
	return (-1);
}
