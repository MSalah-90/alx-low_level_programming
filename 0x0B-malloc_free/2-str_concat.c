#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - entry point
 * @s1: array of chars
 * @s2: another array of chars
 *
 *
 * Description: function concatenates two strings.
 *
 *
 * Return: Returns NULL on failue, pointer should point
 * to a newly allocated space
 * in memory contains the contents of s1,
 * followed by the contents of s2, and null terminated
 *
*/

char *str_concat(char *s1, char *s2)
	{
	char *ptr;
	int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;

	ptr = malloc(sizeof(char) * (i + j + 1));

	if (ptr == NULL)
		return (NULL);

	i = j = 0;
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}

	while (s2[j] != '\0')
	{
		ptr[i] = s2[j];
		i++, j++;
	}
	ptr[i] = '\0';
	return (ptr);
}

