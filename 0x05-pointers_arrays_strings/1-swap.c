#include "main.h"
/**
 * swap_int - swaps the value of two integers
 * @a: integer
 * @b: integer
 * Return: always 0
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
