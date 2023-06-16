#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints all alphabet small letters except q,e
 *
 * Return: 0 (success)
*/

int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		if (alpha != 'e' && alpha != 'q')
		{
		putchar(alpha);
		}
		alpha++;
	}
	putchar('\n');
	return (0);
}
