#include "shell.h"
#include <stddef.h>
/**
  * _strcpy - copies string
  * @dest: the destination to copy
  * @src: a pointer to the source string
  * Return: returns a pointer to the destination string
  */
char *_strcpy(char *dest, char *src)
{
	char *origin_dest = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (origin_dest);
}
/**
 * _strncpy - copies a string
 * @dest: destination pointer argument
 * @src: src pointer argument
 * @n: number of bytes to be copied
 * return: A pointer to the destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
/**
  * _strcat - concatenates two strings together
  * @dest: destination string
  * @src: its the actual real string
  * Return: pointer to the resulting string dest
  */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int d_length = 0;

	while (dest[d_length] != '\0')
	{
		d_length++;
	}
	while (src[i] != '\0')
	{
		dest[d_length + i] = src[i];
		i++;
	}
	dest[d_length + i] = '\0';
	return dest;
}
/**
  * _strcmp - function that compares two  strings
  * @s1: pointer argument to the first string
  * @s2: pointer argument to the second string
  * Return: oif equal, 1 if greater, -1 if less
  */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return ((unsigned char)(*s1) - (unsigned char)(*s2));
}
/**
  * _strstr - locates a substring in the given string
  * @haystack: the string to search in
  * @needle: the string to search for
  * Return: return a pointer to the beginning of the located substring
  */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *hay = haystack;
		char *ned = needle;
		
		while (*hay && *ned && *hay == *ned)
		{
			hay++;
			ned++;
		}
		if (*ned == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
