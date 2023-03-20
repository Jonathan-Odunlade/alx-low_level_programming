#include <stdio.h>
/**
 * main - prints all the numbers of base 16
 *
 * Return: 0 (when code is successful)
 */

int main(void)
{
	int c;

	char d;

	for (c = 0; c < 10; c++)
		putchar(c + '0');

	for (d = 'a'; d <= 'f'; d++)
		putchar(d);

	putchar('\n');

	return (0);
}
