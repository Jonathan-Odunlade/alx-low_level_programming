#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *_abs - computes the absolute value of an integer
 *@b: The computed number
 *Return: Absolute  value of number and 0
 */

int _abs(int b)
{
	if (b < 0)
	{
	int result;

	result = b * -1;
	return (result);
	}
	else
	return (b);
}
