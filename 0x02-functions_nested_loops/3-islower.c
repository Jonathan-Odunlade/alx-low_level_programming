#include <stdio.h>
#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: is the character to be checked
 * Return: 0 (if code is successful)
 */

int _islower(int c)
{
	if (c > 96 && c <= 122)
		return (1);
	else
		return (0);
}
