#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename.
 * @text_content: added content.
 *
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fed;
	int n;
	int w;

	if (!filename)
		return (-1);

	fed = open(filename, O_WRONLY | O_APPEND);

	if (fed == -1)
		return (-1);

	if (text_content)
	{
		for (n = 0; text_content[n]; n++)
			;

		w = write(fed, text_content, n);

		if (w == -1)
			return (-1);
	}

	close(fed);

	return (1);
}
