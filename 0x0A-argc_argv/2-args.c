#include <stdio.h>

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

	i = 0;
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}

return (0);
}
