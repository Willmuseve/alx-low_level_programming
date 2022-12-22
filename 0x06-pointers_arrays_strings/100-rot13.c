#include "main.h"
/**
 * rot13 - Encodes a string using rot13.
 * Return: A pointer to the encoded string.
 */
char *rot13(char *str)
{
	int m = 0, w;
	char alphabet[52] = {'A', 'B', 'C', 'D', 'E', 'F',
		'G', 'H', 'I', 'J', 'K', 'L',
		'M', 'N', 'O', 'P', 'Q', 'R',
		'S', 'T', 'U', 'V', 'W', 'X',
		'Y', 'Z', 'a', 'b', 'c', 'd',
		'e', 'f', 'g', 'h', 'i', 'j',
		'k', 'l', 'm', 'n', 'o', 'p',
		'q', 'r', 's', 't', 'u', 'v',
		'w', 'x', 'y', 'z'};
	char rot13key[52] = {'N', 'O', 'P', 'Q', 'R', 'S', 'T',
		'U', 'V', 'W', 'X', 'Y', 'Z',
		'A', 'B', 'C', 'D', 'E', 'F',
		'G', 'H', 'I', 'J', 'K', 'L',
		'M', 'n', 'o', 'p', 'q', 'r',
		's', 't', 'u', 'v', 'w', 'x',
		'y', 'z', 'a', 'b', 'c', 'd',
		'e', 'f', 'g', 'h', 'i', 'j',
		'k', 'l', 'm'};

	while (str[m])
	{
		for (w = 0; w < 52; w++)
		{
			if (str[m] == alphabet[w])
			{
				str[m] = rot13key[w];
				break;
			}
		}
		m++;
	}
	return (str);
}
