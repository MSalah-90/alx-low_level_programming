#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

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
	if (argc == 3)
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	else
	{
		printf("Error\n");
		return (1);
	}

return (0);
}
