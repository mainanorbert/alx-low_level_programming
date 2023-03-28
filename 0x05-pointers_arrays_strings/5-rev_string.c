#include "main.h"
#include <string.h>

/**
 * rev_string - reservses a string
 * @s: a pointer to a string
 */
void rev_string(char *s)
{
	int len = strlen(s);
	int tmp, i;

	for (i = 0; i < len / 2; i++)
	{
		tmp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = tmp;
	}
}
