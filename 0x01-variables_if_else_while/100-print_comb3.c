#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints all different combinations of two digits
 *
 * Return: 0 (success)
*/

int main(void)
{
	int i = 0, j;

	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			if (i != j && i < j)
			{
				putchar(i + 48);
				putchar(j + 48);

				if (i + j != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
