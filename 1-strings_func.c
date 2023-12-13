#include "shell.h"
/**
  * _strdup - it is the function that generates a second replica
  * @string: the string to dunplicate
  * Return: returns a pointer to the duplicated string
  */
char *_strdup(char *string)
{
	char *dup;
	int i = 0;
	int len = 0;

	len = _strlen(string);
	dup = malloc(sizeof(char) * (len + 1));
	if (dup == NULL)
	{
		free(dup);
		return (NULL);
	}
	while (i <= len)
	{
		dup[i] = string[i];
		i++;
	}
	return (dup);
}
/**
 * _strlen - function to find the lengtth of a string
 * @string: the string to calculate its lengtth
 * Return: the legnth of the string
 */
int _strlen(char *string)
{
	int s_length = 0;

	while (*string)
	{
		s_length++;
	}
	return (s_length);
}
/**
  * _strncmp - compares the amount of n chars in the both strings
  * @st1: first string to compare
  * @st2: second string to compare
  * @n: amount of chars to compare
  * Return: returns 1 if stringd don"t match. else 0
  */
int _strncmp(const char *st1, const char *st2, size_t n)
{
	size_t i;

	if (st1 == NULL)
		return (-1);
	for (i = 0; i < n && st2[i]; i++)
	{
		if (st1[i] != st2[i])
		{
			return (1);
		}
	}
	return (0);
}
