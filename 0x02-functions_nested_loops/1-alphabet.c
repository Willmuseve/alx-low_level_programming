#include "main.h"
/**
 * main - print_alphabet
 * print_alphabet - checks the code
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
