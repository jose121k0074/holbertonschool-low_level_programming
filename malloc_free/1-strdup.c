#include <main.h>
#include <stdlib.h>

/**
 * _strdup - copy the string given to a newly allocated space in memory
 * @str: string to duplicate
 * Return: returns a pointer
 */

char *_strdup(char *str)
{

	int i = 1, a = 0;
	char *s;

	if (str == NULL)
		return (NULL);

	while (str[i])
	{
		i++;
	}

	s = malloc((sizeof(char) * i) + 1);

	if (s == NULL)
		return (NULL);

	while (a < i)
	{
		s[a] = str[a];
		a++;
	}

	s[a] = '\0';
	return (s);
}
