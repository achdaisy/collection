#ifndef _SHELL_D_A
#define _SHELL_D_A

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <fcntl.h>

/*#define ARGS 8*/
#define BUFFSIZE 1024

void console_display(void);
/*void echo(const char *msg);*/
/*void execute_console_display(const char *myConsole)*/
void accept_input_command(char *cmd, size_t size_input);
void exec(char **arg, char **penviron);
void free_arr(char **strings);
char **parser(char *buff);

#endif