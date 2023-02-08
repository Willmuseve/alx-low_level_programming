#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fed;
	ssize_t n, w;
	char *b;

	if (!filename)
		return (0);

	fed = open(filename, O_RDONLY);

	if (fed == -1)
		return (0);

	b = malloc(sizeof(char) * (letters));
	if (!b)
		return (0);

	n = read(fed, b, letters);
	w = write(STDOUT_FILENO, b, n);

	close(fed);

	free(b);

	return (w);
}
