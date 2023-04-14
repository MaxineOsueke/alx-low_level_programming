#include "main.h"
#include <stdio.h>

/**
 * _sqrt - Calculates natural square roots
 * _sqrt_recursion -  Returns the natural square root of a number.
 * @n: Number to calculate the natural square root
 * 
 * Return: Natural square root.
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - Calculates natural square roots
 * @n: Number to calculate square roots.
 * @i: Iterate number.
 * Return: Natual square root
 */
int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);

	if (sqrt == 1)
		return (i);

	return (_sqrt(n, i + 1));
}
