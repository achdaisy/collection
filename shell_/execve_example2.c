//shortform: execve(path, argv, env)

#include <stdio.h>
#include <unistd.h>

/**
 * main - exec function where env variables is given as an array of strings
 *
 * Return: nothing
 */

int main(void)
{
	printf("Main program started\n");
	char *argv[] = {"Mary", "Jane", NULL};
	char *env[] = {"some", "environment", NULL};

	if (execve("./sub", argv, env) == -1)
	{ 
		perror("Could not execve");
	}
	return 1;
}
