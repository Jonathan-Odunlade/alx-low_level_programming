#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - prints numbers 0 to 9 excluding 2 and 4
 * Return: void
 */

void print_most_numbers(void)
{
	char s;

	for (s = '0'; s <= '9'; s++)
		if (s != '2' && s != '4')
			putchar(s);
	putchar('\n');
}
