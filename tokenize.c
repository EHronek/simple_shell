#include "shell.h"
#include <string.h>
/**
  * m_tokenizer - it tokenizes a string
  * @cmd_input: the string to be tokenized
  * @delims: it is the character to be used as separotor
  * Return: a pointer to the tokenized strings
  */
char **m_tokenizer(char *cmd_input, char *delims)
{
	char **p_tokens;
	char *cmd_input_dup1;
	char *cmd_input_dup2;
	int num_tokens = 0;
	char *t_token;
	int i = 0;

	cmd_input_dup1 = strdup(cmd_input);
	t_token = strtok(cmd_input_dup1, delims);
	
	while (t_token != NULL)
	{
		num_tokens++;
		t_token = strtok(NULL, delims);
	}
	p_tokens = malloc((num_tokens) * sizeof(char *));

	cmd_input_dup2 = strdup(cmd_input);
	t_token =  strtok(cmd_input_dup2, delims);

	while (t_token != NULL)
	{
		p_tokens[i] = malloc((strlen(t_token) + 1) * sizeof(char));
		strcpy (p_tokens[i], t_token);
		t_token = strtok(NULL, delims);
		i++;
		p_tokens[i] = NULL;
		/*free(cmd_input_dup1);*/
		/*free(cmd_input_dup2);*/
	}
	return (p_tokens);
}
