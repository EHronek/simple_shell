#include "shell.h"
/**
  * main - main entry point
  * @argv: it is the argument vector
  * @argc: it is the argument count
  *
  * Return: always return 0
  */
int main(int argc, char **argv)
{
	char *input_buffer;
	char **string_array;
	char b;
	int counter = 0;

	(void)argc;
	while (1)
	{
		if (isatty(STDIN_FILENO))
		{
			write(1, "$ ", 2);
		}
		input_buffer = __getline();/* coming back to try with unistd*/
		b = input_buffer[0]; /*checking if input starts with '\0' */
		if (b == '\0')
			continue;
		string_array = parser(input_buffer);/* for tokenization*/
		if (checking_cmd(string_array[0]) == 0)
		{
			builtin_executor(string_array, counter, argv[0]);
			free(string_array);
			free(input_buffer);
			string_array = NULL;
			input_buffer = NULL;
			continue;
		}
		else
			executor(string_array, counter, argv, input_buffer);
		free(string_array);
		free(input_buffer);
	}
	return (0);
}
