#include "main.h"

/**
 * create_file - Creates a file.
 * @fname: A pointer to the name of the file to create.
 * @string_con: A pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 * Otherwise - 1.
 */

int create_file(const char *fname, char *string_con)
{
	int x, y, length = 0;

	if (fname == NULL)
		return (-1);

	if (string_con != NULL)
	{
		for (length = 0; string_con[length];)
			length++;
	}

	x = open(fname, O_CREAT | O_RDWR | O_TRUNC, 0600);
	y = write(x, string_con, length);

	if (x == -1 || y == -1)
		return (-1);

	close(x);

	return (1);
}
