#include "main.h"

/**
 * free_arr - used to free an array of characters
 * @strings: input parameter (array to be freed).
 *
 * Return: void
 */

void free_arr(char **strings)
{
	int i;
        if (strings != NULL)
        {
                for (i = 0; strings[i]; i++)
                {
                        free(strings[i]);
                }
                free(strings);
        }
}