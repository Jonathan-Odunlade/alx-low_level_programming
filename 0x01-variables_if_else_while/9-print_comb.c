#include <stdio.h>

/**
 * main - this prints all possible cominations of single digit characters
 *
 *Return: 0 (when code is successful)
 */

int main(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		putchar(a + '0');
		if (a == 9)
			continue;

		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
