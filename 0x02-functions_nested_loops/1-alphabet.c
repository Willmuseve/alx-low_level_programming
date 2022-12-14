#include "main.h"
/**
 * main - checks the code
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
	putchar('\n');
}
