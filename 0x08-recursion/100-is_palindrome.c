#include "main.h"
/**
 * length - Returns the length of a string.
 * @s: The string to be measured.
 * Return: The length of the string.
 */
int length(char *s);
int check_palindrome(char *s, int len, int index);
int check_palindrome(char *s, int len, int index);

int length(char *s)
{
	int len = 0;

	if (*(s + len))
	{
		len++;
		len += find_strlen(s + len);
	}
	return (len);
}
