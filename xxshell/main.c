#include "main.h"

/**
 * main - main function
 *
 * Return: 0 
 */

int main(__attribute__((unused)) int argc, char **argv, char **penviron)
{
	char *input = NULL, **cmd_args = NULL, buffer;
	size_t n = 0;
	/*int terminal = isatty(0);*/
	int i = 0, incrementor = 0;
	ssize_t chars_read = 0;
	(void) argv;

	while(1)
	{
		incrementor++;
		if (isatty(STDIN_FILENO))/*interactive mode*/
			printf("shell$ ");
		chars_read = getline(&input, &n, stdin);
		cmd_args = parser(input);
		/*if (cmd_args == NULL)
		{
		 	free(input);
		 	free_arr(cmd_args);
			exit(0);
		}*/
		if (chars_read != -1 && cmd_args[i] != NULL)
		{
			if (strcmp(cmd_args[0], "exit") == 0)
			{
				free(cmd_args);
				free(input);
				exit(0); /*need to do some freeing*/
			}
			if (access(cmd_args[0], X_OK) == 0)
			{
				exec(cmd_args, penviron);
				/*free(input);*/
			}
			else
			{
				buffer = (incrementor + '0');
				input_err(argv[0], buffer, cmd_args[0]);
				/*free_arr(cmd_args);*/
				/*free(input);*/
			}
		/*break;*/
		}
		else
		/*if (chars_read == -1)*/
		{
			free(input);
			free_arr(cmd_args);
			return (0);
		}
	}
	free(input);
	free_arr(cmd_args);
	return (0);
}
