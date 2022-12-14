#include "main.h"
/**
 * main - checks the code
 * print_alphabet - runs checkers
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
