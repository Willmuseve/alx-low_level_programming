#include "main.h"
/**
 * set_string -  sets the value of a pointer to a char
 * @s: pointer to set
 * @to: pointer to replace s
 * Return: 0
 */
void set_string(char **s, char *to)
{
	*s = to;
}
