#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <unistd.h>

/**
 * main - func entry point
 * @argc: counter
 * @argv: string of chars
 *
 * Description: print args
 *
 * Return: int
 *
 */

int main(int argc, char **argv)
{
	int i;
	unsigned int x;
	int sum = 0;
	char *j;

if (argc > 1)
{
	for (i = 1; i < argc; i++)
	{
		j = argv[i];

		for (x = 0; x < strlen(j); x++)
		{
			if (j[x] < 47 || j[x] > 58)
			{
				printf("Error\n");
				return (1);
			}
		}

	sum += atoi(argv[i]);
	j++;
	}

		printf("%d\n", sum);
}
else
		printf("0\n");

return (0);
}
