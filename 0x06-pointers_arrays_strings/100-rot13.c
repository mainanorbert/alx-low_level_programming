#include "main.h"
/**
 * rot13 - encodes with rot13
 * @str: returns string
 * Return: returns string
 */
char *rot13(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if ( str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = 'a' + (str[i] - 'a' + 13) % 26;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = 'A' + (str[i] - 'A' + 13) % 26;
		}
		i++;
	}
	return (str);
}
