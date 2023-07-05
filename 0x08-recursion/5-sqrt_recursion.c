/**
 * recurse - print square root
 * @n: checker
 * @i: checker
 * Return: value
 */
int recurse(int n, int i)
{
	if (n == 0)
		return (0);
	else if (n < 0)
		return (-1);
	else if (n / i == i && (n % i == 0))
		return (i);
	else if (i < n)
		return (recurse(n, i + 1));
	return (-1);
}

/**
 * _sqrt_recursion - compute square root
 * @n: number to square root
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
	return (recurse(n, 1));
}
