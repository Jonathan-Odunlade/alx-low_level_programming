#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - prints out the alphabets in lowercase
 *
 * Return: void
 */

void print_alphabet(void)
{
	char j;

	
	for (j = 'a'; j <= 'z'; j++)
		putchar(j);
	putchar('\n');
}
