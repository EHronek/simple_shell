#include "shell.h"
/**
  * __getline - this function is to read user input from the stdin
  *
  * Return: it should return the input read from the stdin
  */
char *__getline()
{
	int bf_size = 1024;
	int i;
	int reads;
	char c = 0;
	char *t_buffer = malloc(bf_size);

	if (t_buffer == NULL)
	{
		free(t_buffer);
		return (NULL);
	}
	for (i = 0; c != '\n' && c != EOF; i++)
	{
		fflush(stdin);
		reads = read(STDIN_FILENO, &c, 1);
		if (reads == 0)
		{
			free(t_buffer);
			exit(EXIT_SUCCESS);
		}
		t_buffer[i] = c;
		if (t_buffer[0] == '\n')
		{
			free(t_buffer);
			return ("\0");
		}
		if (i >= bf_size)
		{
			t_buffer = realloc(t_buffer, bf_size + 1);
			if (t_buffer == NULL)
			{
				return (NULL);
			}
		}
	}
	t_buffer[i] = '\0';
	hash_handler(t_buffer);
	return (t_buffer);
}
/**
  * hash_handler - it should assume and delete everything after #
  * @the_buffer: theinput cmd
  *
  * Return: it returns nothing(void)
  */
void hash_handler(char *the_buffer)
{
	int i;

	for (i = 0; the_buffer[i] != '\0'; i++)
	{
		if (the_buffer[i] == '#')
		{
			the_buffer[i] = '\0';
			break;
		}
	}
}
