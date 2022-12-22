#include "main.h" 
/**
 * strcat - Concatenates the string pointed to by @src, including
 * the x null byte, to the end of the string pointed to by @dest.
 * @dest: A pointer to the string to be concatenated upon.
 *  @src: The source string to be appended to @dest.
 *  Return: A pointer to the destination string @dest.
 */
char *_strcat(char *dest, const char *src)
{
	 int i = 0, destx = 0;

	  while (dest[i++]) 
	  {
		   destx++;
	  }
	  for (i = 0; src[i]; i++)
	  {
		  dest[destx++] = src[i];
	  }
	   return (dest);
}
 
