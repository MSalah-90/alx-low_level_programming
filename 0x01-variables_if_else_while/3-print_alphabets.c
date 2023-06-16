#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints all alphabet small and capital letters
 *
 * Return: 0 (success)
*/

int main(void)
{
	char alpha = 'a';
	char Alpha = 'A';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}

	while (Alpha <= 'Z')
	{
		putchar(Alpha);
		Alpha++;
	}
	putchar('\n');
	return (0);
}
