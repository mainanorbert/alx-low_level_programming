#include "main.h"
#include <string.h>
/**
 * *_strcat - concatenates two strings
 *
 * @dest: destination pointer;
 * @src: pointer to string
 *
 * Return: returns a character
 */
char *_strcat(char *dest, char *src)
{
	char *result = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src++;
	}
	*dest = '\0';
	return (result);
}
