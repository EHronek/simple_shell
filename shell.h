#ifndef _SHELL_H_
#define _SHELL_H_

#include <stdio.h>
#include <stddef.h>
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>
#define CMD_LENGTH 100
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <string.h>
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
char *_strdup(char *string);
char *_strcpy(char *dest, char *src);
char *_strncpy(char *dest, char *src, int n);
char *_strcat(char *dest, char *src);
int _strcmp(char *s1, char *s2);
char *_strstr(char *haystack, char *needle);
int _strlen(char *string);
int _strlen(char *string);
int _strncmp(const char *st1, const char *st2, size_t n);
int _atoi(char *s);
char *_itoa(unsigned int n);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
int ___exit(char **i_cmd, int counts, char *argv);
int ___env(char **cmd, int counts, char *argv);
int ___clear(char **i_cmd, int counts, char *argv);
int _isdigit(char c);
int checking_cmd(char *cmd_input);
void executor(char **cmd_array, int cmd_count, char **argv, char     *buffer);
void printERR(int count, char *cmd, char *argv);
char *__getline();
char **parser(char *input_buff);
void find_path(char **command);
char *building(char *toks, char *dir);
char *_getenv(char *env_name);
int builtin_executor(char **command, int counts, char *argv);
void shell_prompt(void);
void hash_handler(char *the_buffer);
#endif
