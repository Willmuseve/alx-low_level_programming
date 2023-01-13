#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array of a certain number
 *           of elements each of an inputted byte size.
 * @nmb: The number of elements.
 * @size: The byte size of each array element.
 *
 * Return: If nmb = 0, size = 0, or the function fails - NULL.
 *         Otherwise - a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmb, unsigned int size)
{
	void *m;
	char *filler;
	unsigned int index;

	if (nmb == 0 || size == 0)
		return (NULL);

	m = malloc(size * nmb);

	if (m == NULL)
		return (NULL);

	filler = m;

	for (index = 0; index < (size * nmb); index++)
		filler[index] = '\0';

	return (m);
}
