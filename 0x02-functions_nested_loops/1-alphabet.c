#include <stdio.h>
#include "main.h"

/**
 * main - prints the alohabet in lowercase
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

