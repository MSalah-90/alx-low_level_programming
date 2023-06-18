#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints all different combinations of three digits
 *
 * Return: 0 (success)
*/

int main(void)
{
	int i = 0, j, z;

	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			z = 0;
			while (z < 10)
			{
				if (i != j && i < j && j != z && j < z)
				{
					putchar(i + 48);
					putchar(j + 48);
					putchar(z + 48);

				if ((i + j + z) != 24)
				{
					putchar(',');
					putchar(' ');
				}
				}
				z++;
			}
			j++;
		}
		i++;
	}

	putchar('\n');
	return (0);
}
