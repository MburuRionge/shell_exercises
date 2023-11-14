#include <stdio.h>
#include <string.h>

int main()
{
	char command[] = "ls -l a";
	char *token;
	char *delim = " ";

	token = strtok(command, delim);

	while (token)
	{
		printf("Token: %s\n", token);
		token = strtok (NULL, delim);
	}

	return 0;
}
