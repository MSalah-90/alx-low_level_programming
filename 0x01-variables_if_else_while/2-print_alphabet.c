#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints all alphabet small letters
 *
 * Return: 0 (success)
*/

int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
