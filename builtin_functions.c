#include "shell.h"
/**
 * ___exit - this function exits the shell or terminates the shell
 * @i_cmd: it is the input command
 * @counts: number of cmds executed
 * @argv: it is arguents vector
 *
 * Return: 0 for  success, -1 (otherwise)
 */
int ___exit(char **i_cmd, int counts, char *argv)
{
	int i = 0;
	int stata = 0;
	char *s_ptr;

	if (!i_cmd[1])
	{
		free(i_cmd);
		exit(0);
		return (0);
	}
	while (i_cmd[1][i])
	{
		if (_isdigit(i_cmd[1][i]) == 0)
		{
			write(2, argv, _strlen(argv));
			write(2, ": ", 2);
			s_ptr = _itoa(counts);
			write(2, s_ptr, _strlen(s_ptr));
			write(2, ": ", 2);
			write(2, i_cmd[0], _strlen(i_cmd[0]));
			write(2, ": Illegal number: ", 18);
			write(2, i_cmd[1], _strlen(i_cmd[1]));
			write(2, "\n", 1);
			return (-1);
		}
		i++;
	}
	stata = _atoi(i_cmd[1]);
	free(i_cmd);
	exit(stata);
	return (0);
}
/**
 * ___env - this function should print the current environment like env
 * @cmd: it is the command input
 * @counts: number of commands
 * @argv: arg vector
 * Return: returns 0 on success, -1 otherwise
 */
int ___env(char **cmd, int counts, char *argv)
{
	int i = 0;
	(void)counts;
	(void)argv;
	(void)cmd;

	while (environ[i])
	{
		write(1, environ[i], _strlen(environ[i]));
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
/**
 * ___clear - this func clears the terminal window
 * @i_cmd: the command input (acommand)
 * @counts: is the number of commands
 * @argv: argument vector
 *
 * Return: returns 0 on success, -1 otherwise
 */
int ___clear(char **i_cmd, int counts, char *argv)
{
	(void)i_cmd;
	(void)counts;
	(void)argv;
	write(1, "\033[1;1H\033[2J", 10);
	return (0);
}
/**
  * _isdigit - this function should check if the argument is a digut
  * @c: this the param int to test
  * Return: returns 1 true, else (0)
  */
int _isdigit(char c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
