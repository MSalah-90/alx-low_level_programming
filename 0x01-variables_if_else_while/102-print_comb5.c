#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints all different combinations of two two digits
 *
 * Return: 0 (success)
*/

int main(void)
{
	int i = 0, j, x, y;

	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			x = 0;
			while (x < 10)
			{
				y = 0;
				while (y < 10)
				{
					if ((i + j) <= (x + y))
					{
						putchar(i + 48);
						putchar(j + 48);
						putchar(' ');
						putchar(x + 48);
						putchar(y + 48);
					if (i == 9 && j == 8 && x == 9 && y == 9)
						return (0);
					else
					{
						putchar(',');
						putchar(' ');
					}
					}
					y++;
				}
				x++;
			}
			j++;
		}
		i++;
	}

	putchar('\n');
	return (0);
}
