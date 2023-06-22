/**
 * _isdigit - checks if input is a digit between 0 - 9
 *
 * @c: input integer
 *
 * Return: 1 if is digit and 0 if not
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
