#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * path - handles the PATH
 *
 * Return: nothing
 */
#define PATH_DELIM ":"
void path(char *buffer)
{
        char *path, *token, *path_var;

        path = getenv("PATH");
        if (path == NULL)
        {
                printf("path not found\n");
                exit(98);
        }
        path_var = strdup(path);
        /*tokenizing*/
        token = strtok(path_var, PATH_DELIM);
        while (token)
        {
                printf("Token %s\n", token);
                token = strtok(NULL, PATH_DELIM);
        }
}

int main(void)
{
        path("/usr/local/bin:/local/bin:/bin");
        return 0;
}

