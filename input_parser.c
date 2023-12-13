#include "shell.h"
/**
  * parser - this function parses the commmand input for tokenization
  * @input_buff: string containing the command input
  *
  * Return: return parsed command
  */
char **parser(char *input_buff)
{
	char **cmd_input;
	char *token;
	int i = 0;

	if (input_buff == NULL)
		return (NULL);
	token = strtok(input_buff, " \n");
	if (token == NULL)
		return (NULL);

	cmd_input = malloc(sizeof(char *) * 1024);
	while (token)
	{
		cmd_input[i++] = token;
		token = strtok(NULL, " \n");
	}
	cmd_input[i] = NULL;
	return (cmd_input);
}
