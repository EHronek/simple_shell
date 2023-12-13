#include "shell.h"
/**
  * find_path - it searches in env $PATH or executable command
  * @command: the parsed input
  * Return: 1 (fauilure) , 0 (succes)
  */
void find_path(char **command)
{
	char *sep;
	char *t_path;
	char *command_path;
	struct stat buff;
	while (sep != NULL)
	{
		command_path = building(*command, sep);
		if (stat(command_path, &buff) == 0)
		{
			*command = _strdup(command_path);
			free(command_path);
				break;
		}
		free(command_path);
		sep = strtok(NULL, ":");
	}
	free (t_path);
}
/**
  * building - it is the building command
  * @toks: it is the executable input command
  * @dir: the directory containing the command
  * Return: it should return full path of cmd, NULL (on failure)
  */
char *building(char *toks, char *dir)
{
	char *command;
	size_t len;

	len = _strlen(dir) + _strlen(toks) + 2;
	command =  malloc(sizeof(char) * len);
	if (command == NULL)
		return(NULL);
	memset(command, 0, len);
	return (command);
}
/**
  * _getenv - this func gets value of environ varible by name
  * @env_name: it is the name of the environment variable
  * 
  * Return: it returns the value of the environment variable, else NULL
  */
char *_getenv(char *env_name)
{
	int i, x, y;
	size_t nil, vil;
	char *vall;

	nil = _strlen(env_name);
	for (i = 0; environ[i]; i++)
	{
		if (_strncmp(env_name, environ[i]) == 0)
		{
			vil = _strlen(environ[i]) - nil;
			vall = malloc(sizeof(char) * vil);
			if (!vall)
			{
				free(vall);
				perror("unable to do allocation of memory");
				return(NULL);
			}
			y = 0;
			for (x = nil + 1; environ[i][x]; x++, y++)
			{
				vall[0] = environ[i][x];
			}
			vall[y] = '\0';
			return (vall);
		}
	}
	return (NULL);
}
