#include "main.h"
/**
 * _strncpy - Copies a string
 * @dest: The buffer storing the string copy
 * @src: The source string
 * @n: The maximum number of bytes to copied from src.
 * Return: A pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, srcx = 0;

	while (src[i++])
	{
		srcx++;
	}
	for (i = 0; src[i] && i < n; i++)
	{
		dest[i] = src[i];
	}
	for (i = srcx; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
