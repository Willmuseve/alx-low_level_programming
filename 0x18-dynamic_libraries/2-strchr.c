#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: is a string
 * @c: is a character
 * Return: a pointer
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		++s;
	}
	if (*s == c)
	{
		return (s);
	}
	return ('\0');
}
