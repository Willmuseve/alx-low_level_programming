#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a square
 * matrix of integers.
 * @a: array to use
 * @size: size of diagonal
 */
void print_diagsums(int *a, int size)
{
	int i;
	int a = 0;
	int b = 0;

	for (i = 0; i < size; i++)
	{
		a += a[(i * size) + i];
		b += a[(size - 1) + ((size - 1) * i)];
	}
	printf("%d, %d\n", a, b);
}
