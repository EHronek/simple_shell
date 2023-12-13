#include "shell.h"
/**
  * shell_prompt - it should display a prompt to the user
  * Return: it should return nothing
  */
void prompt(void)
{
	_putchar('$');
	_putchar(' ');
	fflush(stdout); //writes the prompt
}
