#include "main.h"
/**
 *  _puts -  prints a string, followed by a new line, to stdout
 *  @str: pointer
 *  Return: 0 or output
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}