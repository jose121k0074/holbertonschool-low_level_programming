#include "main.h"
/**
 * rev_string - funcion revertir string
 * @s: variable
 */
void rev_string(char *s)
{
	int i = 0, inicio;
	char tmp;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	for (inicio = i; inicio >= i / 2; inicio--)
	{
		tmp = s[inicio];
		s[inicio] = s[i - inicio];
		s[i - inicio] = tmp;
	}

}
