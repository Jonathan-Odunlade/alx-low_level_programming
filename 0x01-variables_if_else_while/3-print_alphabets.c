#include <stdio.h>

/**
 * main - prints the albet in lower and upper
 *
 * Return: 0 (if code is successful)
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);

	putchar('\n');


	return (0);
}

