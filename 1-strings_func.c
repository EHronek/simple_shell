/**
  * _strdup - it is the function that generates a second replica
  * @string: the string to dunplicate
  * Return: returns a pointer to the duplicated string
  */
CHAR *_strdup(char *string)
{
	char *dup;
	size_t i = 0;
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

	while(*string)
	{
		s_length++;
	}
	return (s_length);
}
