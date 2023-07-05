#include "main.h"
/**
 * _pow_recursion - prints a reversed sting
 * @x: character
 * @y: character
 * Return: value
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, (y - 1)));
}
