#include <stdio.h>
#include <unistd.h>

/**
 * main - returns the process Id
 *
 * Return : 0
 */

int main (void)
{
	int  my_pid;

	my_pid = getpid();
	printf("%u\n", my_pid);
	return (0);
}
