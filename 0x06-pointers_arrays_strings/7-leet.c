#include "main.h"
/**
 * leet - Encodes a string to 1337.
 * @str: The string to be encoded
 * Return: A pointer to the encoded string.
 */
char *leet(char *str)
{
	int p = 0, s;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[p])
	{
		for (s = 0; s <= 7; s++)
		{
			if (str[p] == leet[s] || str[p] - 32 == leet[s])
				str[p] = s + '0';
		}
		p++;
	}
	return (str);
}
