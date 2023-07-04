#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - functions that prints anything
 * @format: list of various types of arguments passed
 */
void print_all(const char * const format, ...)
{
	int i = 0, len = 0;
	/**float f;*/
	char *s = ", ";
	char *str;
	va_list args;

	va_start(args, format);

	while (format != NULL && format[len] != '\0')
	{
		len++;
	}
		while (*format && format[i])
		{
			if (i == len - 1)
			s = "";
			switch (format[i])
			{
				case 'c':
					printf("%c%s", va_arg(args, int), s);
					break;
				case 'i':
					printf("%d%s", va_arg(args, int), s);
					break;
				case 'f':
					printf("%f%s", va_arg(args, double), s);
					break;
				case 's':
					str = va_arg(args, char *);
					if (str == NULL)
						str = "(nil)";
					printf("%s%s", str, s);
					break;
			}
			i++;
		}
		printf("\n");
		va_end(args);
}
