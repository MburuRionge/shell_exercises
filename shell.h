#ifndef SHELL_H
#define SHELL_H

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <string.h>

void my_print(char *string, int descriptor);
void display_prompt(void);
void user_input(char *command, size_t size);
void execute_command(const char *command);

#endif
