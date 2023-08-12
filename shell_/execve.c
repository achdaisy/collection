//execve allows a process to execute another program.
//NB: Does not load the new program into tyhe current process's memmory in place of the previous program
//executes the program referred to by the path name
//execve(const char *pathname, char *const _Nullable argv[], char const _Nullable envp[]);

#include <stdio.h>
#include <unistd.h>

/**
 * main - executes a program using execve
 *
 * Return : nothing
 */

int main(void)
{
	char *argv[] = {"/bin/ls", "-l", "/usr/", NULL};

	printf("Before execve\n");
	if (execve(argv[0], argv, NULL) == -1)
	{
		perror("Error:");
	}
	printf("After execve\n");
	return (0);
}
