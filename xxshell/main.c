#include "main.h"

/**
 * main - main function
 *
 * Return: 0 
 */

int main(int argc, char **argv, char **penviron)
{
	char *input = NULL, **cmd_args = NULL;
	/*char *filepath = NULL*/
	size_t n = 0;
	/*int i, terminal = isatty(0);*/
	int incrementor = 0;
	ssize_t chars_read = 0;
	(void) argc;
	(void) argv;

	while(1)
	{
		incrementor++;
		if (isatty(STDIN_FILENO))/*interactive mode*/
			/*console_display();*/
			printf("shell$ ");
		chars_read = getline(&input, &n, stdin);
		if (chars_read == -1) /*handles EOF*/
		{
			free_arr(cmd_args);
			free(input);
                        exit(0);
		}
		cmd_args = parser(input);
		
		if (cmd_args[0] == NULL)
                {
                        free(cmd_args);
                        continue;
                }
		/*for (i = 0; cmd_args[i] != NULL; i++)
		{
			printf("%s\n", cmd_args[i]);
		}*/
		exec(cmd_args, penviron);
	}
	free(input);
	free_arr(cmd_args);
	return (0);
}
