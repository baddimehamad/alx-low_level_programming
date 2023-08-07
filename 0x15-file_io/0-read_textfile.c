#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @fname: A pointer to the name of the file.
 * @letter: The number of letter the
 *           function should read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 *         x/z - the actual number of bytes the function can read and print.
 */

ssize_t read_textfile(const char *fname, size_t letter)
{
	 ssize_t x, y, z;
	char *buffer;

	if (fname == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letter);
	if (buffer ==  NULL)
		return (0);

	x = open(fname, O_RDONLY);
	y = read(x, buffer, letter);
	z = write(STDOUT_FILENO, buffer, y);

	if (x == -1 || y == -1 || z == -1 || z != y)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(x);

	return (z);

}
