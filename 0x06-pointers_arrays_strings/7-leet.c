#include "main.h"
/**
 * leet - encodes a string
 * @str: poinnter to a string
 * Return:returns a character
 */
char *leet(char *str)
{
	char *mychars = "aAeEoOtTlL";
	char *mysubs = "4433007711";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; mychars[j] != '\0'; j++)
		{
			if (str[i] == mychars[j])
			{
				str[i] = mysubs[j];
				break;
			}
		}
	}
	return (str);
}
