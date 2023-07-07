#include <stdio.h>

/**
 * main - func entry point
 * @argc: counter
 * @argv: string of chars
 *
 * Description: returns num of args
 *
 * Return: int
 *
 */

int main(int argc, char **argv)
{
	printf("%d\n", argc - 1);
	(void)argv;
return (0);
}
