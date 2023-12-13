#include "shell.h"
/**
  * builtin_executor - this fnction executes builtin commands
  * @command: command to execute
  * @counts: cmd nums
  * @argv: arguments vector
  *
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
			return ((select + i)->func_ptr(command, counter, argv));
#include <stdbool.h>
		i++;
	}
	return (-1);
}
