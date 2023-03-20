#include <stdio.h>

/**
 * main - prints numbers 0 to 9
 *
 * Return: 0 (only if code is successful)
 */

int main(void)
{
	char ch = '0';

	for (ch = '0'; ch <= 'z'; ch++)
		putchar(ch);

	putchar('\n');

	return (0);
}
