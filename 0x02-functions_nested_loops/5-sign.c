#include <stdio.h>
#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: the character to be checked
 * Return: 0/1/-1 if n is zero/more than zero/less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
