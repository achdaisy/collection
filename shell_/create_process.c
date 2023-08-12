//Creating process using fork()

#include <stdio.h>
#include <unistd.h>

int main(void)
{
	pid_t my_process;
	pid_t my_pid;

	printf("Before fork\n");
	my_process = fork();
	if (my_process == -1)
	{
		perror("Error");
		return (1);
	}
	printf("After fork\n");
	my_pid = getpid();
	printf("My pid is :%u\n", my_pid);
	return (0);
}
