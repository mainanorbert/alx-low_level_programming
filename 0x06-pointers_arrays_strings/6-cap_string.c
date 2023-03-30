#include "main.h"
#include <ctype.h>

/**
 * cap_string - capitalizes words in a string
 *
 * @str: pointer to a string
 *
 * Return: returns a string
 */
char *cap_string(char *str)
{
	int i;

	/*capitalize first letter of string*/
	str[0] = toupper(str[0]);
	for (i = 1; str[i] != '\0'; i++)
	{
		if (str[i - 1] == ' ' || str[i - 1] == '\t' || str[i - 1] == '\n' ||
				str[i - 1] == ',' || str[i - 1] == ';' || str[i - 1] == '.' ||
				str[i - 1] == '!' || str[i - 1] == '?' || str[i - 1] == '"' ||
				str[i - 1] == '(' || str[i - 1] == ')' || str[i - 1] == '{' ||
				str[i - 1] == '}')
		{
			str[i] = toupper(str[i]);
		}
	}
	return (str);
}
