#include "shell.h"
/**
  * checking_cmd - this function checks if the command is builtin
  * @cmd_input: it is the command to check
  * Return: returns 0 if true else -1
  */
int checking_cmd(char *cmd_input)
{
	int i;
	char *cmd_array[] = {"exit", "env", "clear", NULL};

	i = 0;
	while (cmd_array[i])
	{
		if (_strcmp(cmd_array[i], cmd_input) == 0)
			return (0);
		i++;
	}
	return (-1);
}
