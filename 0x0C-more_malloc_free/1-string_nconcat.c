#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: pointer to string
 * @s2: pointer to a string
 * @n: no of bytes for s2
 * Return: returns pointer to string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1 = 0;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1] != '\0')
	{
		len1++;
	}
	ptr = (char *) malloc(sizeof(char *) * (len1 + n + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; j < n && s2[j] != '\0'; j++)
	{
		ptr[len1 + j] = s2[j];
	}
	ptr[len1 + n] = '\0';
	return (ptr);
}
