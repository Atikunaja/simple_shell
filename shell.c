#include "shell.h"
/**
 * main - a function that Write a UNIX command line interpreter *
 * Return: Always 0
 */
int main(void)
{
	size_t buffsize = 0;
	char *buff = NULL;
	char *token;
	int i = 0;
	char **array;
	pid_t child_pid;
	int status;
	char *cmdPath;

	while (1)
	{
		write(1, "#simple_shell$ ", 15);
		getline(&buff, &buffsize, stdin);
		token = strtok(buff, " \t\n");
		array = malloc(sizeof(char *) * 1024);
		while (token)
		{
			array[i] = token;
			token = strtok(NULL, " \t\n");
			i++;
		}
		array[i] = NULL;
		i = 0;
		child_pid = fork();
		if (child_pid == -1)
		{
			perror("Error:");
			return (-1);
		}
		if (child_pid == 0)
			{
				cmdPath = get_path(array[0]);
		if (cmdPath != NULL)
			{
				execve(cmdPath, array, environ);
	if (execve(cmdPath, array, environ) == -1)
	perror("Error: Execve failed");
	free(buff);
	exit(1);
		}
		else
			wait(&status);
		i++;
		i = 0;
		free(array);
	}
	return (0);
	}
}
