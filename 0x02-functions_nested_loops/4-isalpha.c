#include <stdio.h>
#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: the character to be checked
 * Return: 1 or 0 (depending on code)
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
		return (1);
	else
		return (0);
}
