#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints all base ten numbers
 *
 * Return: 0 (success)
*/

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		i++;
	}
	putchar('\n');
	return (0);
}
