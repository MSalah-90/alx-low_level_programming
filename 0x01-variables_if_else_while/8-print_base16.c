#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints all base sixteen numbers
 *
 * Return: 0 (success)
*/

int main(void)
{
	int i = 48;

	while (i <= 102)
	{
		putchar(i);
		if (i == 57)
			i += 39;
		i++;
	}
	putchar('\n');
	return (0);
}
