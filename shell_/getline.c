#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * main - reads a line from the shell using getline
 *
 * Return: 0 on success, -1 otherwise
 */

int main(void)
{
	char *buffer;
	size_t n = 10;
	size_t nread;

	buffer = malloc(sizeof(char));
	if (buffer == NULL)
	{
		printf("Unable to allocate buffer\n");
		exit (98);
	}
	
	printf("shell$ ");
	nread = getline(&buffer, &n, stdin);
	printf("%zu characters were read.\n", nread);
	printf("You typed %s\n", buffer);

	return (0);
}
