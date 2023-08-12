//strtok takes  a string and a delimeter, then breaks the given string into a series of tokens
//using the delimeter passed as a parameter.
//the string literal results to a segmentation fault because strings are stored in the read only section of memory and therefore cannot be changed.

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
	char *src = "Made,in,Kenya"; //using a string literal
	char *str = malloc(sizeof(char) * strlen(src));
	char *delim = ",";
	char *token;

	strcpy(str, src);

	token = strtok(str, delim);

	while (token != NULL)
	{
		printf("%s\n", token);
		token = strtok(NULL, delim);
	}
	return (0);
}
