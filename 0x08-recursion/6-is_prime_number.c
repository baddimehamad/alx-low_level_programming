#include "main.h"
/**
* recurse - factors of number
 * @n: checker
 * @i: checker
 * Return: value
 */
int recurse(int n, int i)
{
	if (n == 2)
		return (1);
	if (n <= 1 || n % 2 == 0)
		return (0);
	if (n % i == 0 && n != i)
		return (0);
	if (i < n)
		return (recurse(n, i + 2));
	return (1);
}
/**
 * is_prime_number - if number is prime
 * @n: checker
 * Return: True 1, False 0
 */
int is_prime_number(int n)
{
	return (recurse(n, 3));
}
