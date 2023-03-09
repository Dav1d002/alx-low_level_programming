#include "main.h"

/**
 * _pow_incursion - returns the value of x raised to the power of y
 * @x: value to raised
 * @y: power
 *
 * Return: result of the power
 */

int _pow_incursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_incursion(x, y - 1));
}
