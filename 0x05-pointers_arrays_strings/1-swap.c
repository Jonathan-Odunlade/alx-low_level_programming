#include <stdio.h>
#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: one of the integers
 * @b: second integer
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	*a = *a - *b;

	*b = *a + *b;

	*a = *b - *a;
}
