#include "main.h"

/**
 * helperfunction - checks if sqrt of number exists
 * @num: number.
 * @pSqrt: possible sqrt of number.
 *
 * Return: sqrt of number ot -1 for error.
 */
int helperfunction(int num, int pSqrt)
{
	if ((pSqrt * pSqrt) == num)
	{
		return (pSqrt);
	}
	else
	{
		if ((pSqrt * pSqrt) > num)
			return (-1);
		else
			return (helperfunction(num, pSqrt + 1));
	}
}

/**
 * _sqrt_recursion - return the natural square root of a number.
 * @n: number to find sqrt of.
 *
 * Return: squareroot of n.
 * -1 if n does not have a natural sqrt.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (helperfunction(n, 0));
}
