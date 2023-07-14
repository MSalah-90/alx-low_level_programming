#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - entry point
 * @s1: array of chars
 * @s2 array of chars
 * @n: no of chars from s2
 *
 * Description: The returned pointer shall point to a newly allocated
 * space in memory, which contains s1, followed by the first n bytes
 * of s2, and null terminated
 *
 * Return: If the function fails, it should return NULL.
 * If n is greater or equal to the length of s2 then use the entire string s2
 * if NULL is passed, treat it as an empty string
 *
 */



char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *var;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
	{
		s2 = "";
	}
		if (n < sizeof(s2))
			var = malloc(sizeof(char) * (sizeof(s1) + n));
		else if (n >= sizeof(s2))
			var = malloc(sizeof(char) * (sizeof(s1) + sizeof(s2)));
		else if (s2 == NULL)
			var = malloc(sizeof(char) * sizeof(s1));

	if (var == NULL)
		return (NULL);

	i = 0;
	while (s1[i] != '\0')
	{
		var[i] = s1[i];
		i++;
	}

	j = 0;
	while (s2[j] != '\0' && j < n)
	{
		var[i] = s2[j];
		i++;
		j++;
	}
	var[i] = '\0';
	return (var);

}
