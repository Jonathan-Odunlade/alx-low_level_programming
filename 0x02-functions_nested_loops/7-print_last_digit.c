#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @j: the character to be printed
 * Return: the last digit or 0
 */

int print_last_digit(int j)
{
	int last_digit;
	{

	last_digit = j % 10;
	if (j < 0)
		last_digit = last_digit * -1;
	}

	_putchar(last_digit + '0');
	return (last_digit);
}
