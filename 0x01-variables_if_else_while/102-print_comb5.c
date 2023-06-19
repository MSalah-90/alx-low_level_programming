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
	int i = 0, j, x, y, a, b;

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
					a = (i * 10) + j;
					b = (x * 10) + y;
					if (a < b)
					{
						putchar(i + 48);
						putchar(j + 48);
						putchar(' ');
						putchar(x + 48);
						putchar(y + 48);
					if (a != 98 || b != 99)
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
