#ifndef _SHELL_H_
#define _SHELL_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define CMD_LENGTH 100
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>

extern char **environ;

/**
  * struct builtin_cmd - struct typedefine for a function pointer to a cmd
  * @command: the cmd to execute
  * @func: it is a function pointer to functions that execute builtin commands fromthe user input
  *
  */
typedef struct builtin_cmd
{
	char *command;
	int (*func_ptr)(char **cmd, int counter, char *argv);
} builtins;

char **m_tokenizer(char *cmd_input, char *delims);
int _putchar(char c);
char *file_path(char *input);
void prompt(void);
void _puts(char *str);
char *_strcpy(char *dest, char *src);
char *_strncpy(char *dest, char *src, int n);
char *_strcat(char *dest, char *src);
int _strcmp(char *s1, char *s2);
char *_strstr(char *haystack, char *needle);
int _strlen(char *string);
void shell_prompt(void);
bool f_inspect(const char *filename);
bool path_env_true(char *file_input_path);
bool path_exists(char *path_var, char *executable);
#endif
