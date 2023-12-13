#include "shell.h"
/**
  * printERR - it ptints the error message
  * @count: no of commmands
  * @cmd_input: command input
  * @argv: it is the command line argument
  */
void printERR(int count, char *cmd, char *argv)
{
	char *s_ptr;

	write(2, argv, _strlen(argv));
	write(2, ": ", 2);
	s_ptr = _atoi(count);
	write(2, s_ptr, _strlen(s_ptr));
	write(2, ": ", 2);
	write(2, cmd_input, _strlen(cmd));
	write(2, ": not found\n", 12);
}
