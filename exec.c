#include "shell.h"

void execute_command(const char *command)
{
	pid_t child = fork();

	if (child == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}
	else if(child == 0)
	{
		char command_path[256];
		snprintf(command_path, sizeof(command_path), "/bin/%s", command);

		const char *args[] = {command, NULL};
		execve(command_path, args, NULL);

		perror("execve");
		exit(EXIT_FAILURE);
	}
	else
	{
		wait(NULL);
	}
}
