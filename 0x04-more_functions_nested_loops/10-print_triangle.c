#include "main.h"
/**
 * print_triangle -prints the triangle
 * @size: contains value
 * Return: returns 0
 */
void print_triangle(int size)
{
	int i = 1, x;

	while (i <= size && size > 0)
	{
		x = 0;
		while (x < size - i)
		{
			_putchar(' ');
			x++;
		}
		x = 0;
		while (x < i)
		{
			_putchar('#');
			x++;
		}
		_putchar('\n');
		i++;
	}
	if (i == 1)
		_putchar('\n');
}
