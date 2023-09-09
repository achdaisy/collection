#include "main.h"

/**
 * echo - custom print function
 *
 * Return: void
 */

/*void echo(const char *msg)
{
	write(STDOUT_FILENO, msgPrompt, strlen(message));
}
*/

/**
 * console_display - displays the user prompt
 *
 * Return: void
 */

void console_display (void)
{
	char *prompt = "shell$";
	(write(1, &prompt, strlen(prompt)));
}
