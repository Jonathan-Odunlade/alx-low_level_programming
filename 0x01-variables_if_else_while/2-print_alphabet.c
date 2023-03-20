#include <stdio.h>
/**
 * Main - prints all aphabets
 *
 * Return: 0 (if code is successful)
 */

int main(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);

	putchar('\n');
	return (0);
}
