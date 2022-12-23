#include "main.h"
#include <stdio.h>
/**
 * print_buffer - Prints a buffer 10 bytes at a time, starting with
 * the byte position, then showing the hex content,
 * then displaying printable charcaters
 * @b: The buffer to be printed
 * @size: The number of bytes to be printed from the buffer.
 */
void print_buffer(char *b, int size)
{
	int e, i;

	for (e = 0; e < size; e += 10)
	{
		printf("%08x: ", e);
		for (i = 0; i < 10; i++)
		{
			if ((i + e) >= size)
				printf("  ");

			else
				printf("%02x", *(b + i + e));

			if ((i % 2) != 0 && i != 0)
				printf(" ");

			for (i = 0; i < 10; i++)
			{
				if ((i + e) >= size)
					break;

				else if (*(b + i + e) >= 31 && *(b + i + e) <= 126)
					printf("%c", *(b + i + e));

				else
					 printf(".");
			}
			if (e >= size)
				continue;
			printf("\n");
		}
	}
	if (size <= 0)
		printf("\n");
}
