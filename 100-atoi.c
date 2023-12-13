#include "main.h"
/**
  * _atoi - converts string to integer
  * @s: pointer argument
  * Return: returns an unteger value
  */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;

	while (*s == ' ' || (*s >= 9 && *s <= 13) || *s == '+' || *s == '-')
	{
		if (*s == '-')
		{
			sign *= -1;
		}
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		result = result * 10 + (*s - '0');
		s++;
	}
	return (result * sign);
}
/**
  * _itoa -it should convert an integer to  a character
  * @n: it is the integer to convert
  *
  * Return: it should return a character pointer
  */
char *_itoa(unsigned int n)
{
	int len = 0; 
	int a = 0;
	int num;
	char *c;
	char tmp;

	num = n;
	while (num != 0)
	{
		len++;
		num = num / 10;
	}
	c = malloc(len + 1);
	if (!c)
		return (NULL);
	*c = '\0';
	while (n / 10)
	{
		c[a] = (n % 10) + '0';
		n = n / 10;
		a++;
	}
	c[a] = (n % 10) + '0';

	for (a = 0; a < (len / 2); a++)
	{
		tmp = c[a];
		c[a] = c[(len - 1) - a];
		c[(len - 1) - a] = tmp;
	}
	c[a + 1] = '\0';
	return (c);
}
/**
  * _memset - fills the first n bytes of the memory area pointed yo by s
  * @s: pointer to the mem location
  * @b: is the constant byte to fill with
  * @n: the number of bytesto fill
  * Return: a pointer to the memory location
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
/**
  * _memcpy - copies n btyes of memory area src to memory area dest
  * @dest: the pointer to the destination
  * @src: the pointer to the source
  * @n: n bytes to be copied
  * Return: pointer to dest
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	unsigned char *destination = (unsigned char *) dest;
	const unsigned char *source = (const unsigned char *)src;

	for (i = 0; i < n; i++)
	{
		destination[i] = source[i];
	}
	return (dest);
}
