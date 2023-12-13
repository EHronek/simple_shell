#include "shell.h"
/**
  * executor - this function executes the cmds within shell
  * @cmd_array: the parsed commands
  * @cmd_num: the number of commands parsed
  * @argv: command line argumemnts parsed with command
  * @buffer: its the buffer containing input
  */
void executor(char **cmd_array, int cmd_count, char **argv, char *buffer)
{
	int wstat;

	if (fork() != 0)
	{
		wait(&wstat);
	}
	else
	{
		if (_strncmp(cmd_array[0], "./", 2) != 0 && _strncmp(cmd_array[0], "/", 1))
		{
			find_path(&cmd_array[0]);
		}
		if (execve(*cmd_array, cmd_array, environ) == -1)
		{
			printERR(cmd_count, cmd_array[0], argv[0]);
			free(cmd_array);
			free(buffer);
			exit(EXIT_FAILURE);
		}
	}
}
