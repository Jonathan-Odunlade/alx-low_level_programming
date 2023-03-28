#include <stdio.h>
#include "main.h"

/**
 * _strlen - prints the length of a string
 * *str: the string in to be used
 * Return: always 0.
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; s++)
		++i;

	return (i);
}
