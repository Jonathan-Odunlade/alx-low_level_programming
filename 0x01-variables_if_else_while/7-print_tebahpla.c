#include <stdio.h>
/**
 * main - this prints a to z in reverse order
 *
 * Return: 0 (when code is successful)
 */

int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
