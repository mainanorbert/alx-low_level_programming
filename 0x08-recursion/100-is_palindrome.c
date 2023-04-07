#include "main.h"
#include <string.h>
int palindrome_func(char *S, int i, int j);
/**
 * is_palindrome - checks if string is palindrome
 * @s: pointer to a string
 * Return: returns an integer
 */
int is_palindrome(char *s)
{
	int len = strlen(s);

	if (len == 0)
	{
		return (1);	/* empty string is a palindrome*/
	}
	return (palindrome_func(s, 0, len - 1));
}
/**
 * palindrome_func - checks if string is palindrome
 * @s:  string to input
 * @i: start index
 * @j: the end index
 * Return: returns 1 or 0
 */

int palindrome_func(char *s, int i, int j)
{
	if (i >= j)	/*all characters checked compared and are equal*/
	{
		return (1);	/*string is a palindrome*/
	}
	if (s[i] != s[j])	/*some characters not equal*/
	{
		return (0);
	}
	return (palindrome_func(s, i + 1, j - 1));	/*checking the next pair*/
}
