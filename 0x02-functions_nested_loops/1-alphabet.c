#include "main.h"
/**
 * print_alphabet - entry point
 * Return: always 0,
 */
void print_alphabet(void)
{
	int c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
