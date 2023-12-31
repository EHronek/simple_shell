#include "shell.h"
/**
  * builtin_executor - this fnction executes builtin commands
  * @command: command to execute
  * @counts: cmd nums
  * @argv: arguments vector
  * Return: 0 (success), -1 on failure
  */
int builtin_executor(char **command, int counts, char *argv)
{
	int i = 0;
	builtins select[] = {
		{"exit", ___exit},
		{"env", ___env},
		{"clear", ___clear},
		{NULL, NULL}
	};
	while ((select + i)->command)
	{
		if (_strcmp((select + i)->command, command[0]) == 0)
			return ((select + i)->func(command, counts, argv));
		i++;
	}
	return (-1);
}
