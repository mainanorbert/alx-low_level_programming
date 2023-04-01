#include "main.h"
/**
 * rot13 - encodes with rot13
 * @str: returns string
 * Return: returns string
 */
char *rot13(char *str)
{
	int i = 0;
	char minus[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char mayus[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (str[i] != '\0')
	{
		int j = 0;

		while (minus[j] != '\0')
		{
			if (str[i] == minus[j])
			{
				str[i] = mayus[j];
				break;
			}
			j++;
		}
		i++;
	}
	str[i] = '\n';
	return (str);
}
