#include "main.h"
/**
 * print_error - prints error message
 * Description: to the standard error output
 * @message: message to be printed
 * @arg: argment from stdinput
 */

void print_error(const char *message, const char *arg)
{
	dprintf(STDERR_FILENO, message, arg);
}
