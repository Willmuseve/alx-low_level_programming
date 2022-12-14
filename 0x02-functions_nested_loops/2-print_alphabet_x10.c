#include "main.h"
/**
 * print_alphabet_x10 - entry point
 * Return:always 0 
 */
void print_alphabet_x10(void)
{
	int k = 'a';
	int j;

	while (j < 10)
	{
		while (k <= 'z')
		{
			_putchar(k);
			k++;
		}
		_putchar('\n');
		j++;
	}
}
