#include <stdio.h>
#include <unistd.h>

/**
 * main - print the parent ID
 *
 * Return: nothing
 */
int main(void)
{
	pid_t my_ppid;

	my_ppid = getppid();
	printf("My PPID is: %u\n", my_ppid);
}
