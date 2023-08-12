//strtok takes  a string and a delimeter, then breaks the given string into a series of tokens
//using the delimeter passed as a parameter.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - extracts tokens from a string using strtok()
 *
 * Return: 0
 */

int main(void)
{
	char str[] = "Made,in,Kenya";
	char *delim = ",";
	char *token;

	token = strtok(str, delim);

	while (token != NULL)
	{
		printf("%s\n", token);
		token = strtok(NULL, delim);
	}
	return (0);
}
