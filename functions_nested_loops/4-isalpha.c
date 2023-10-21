#include "main.h"
/**
 * _isalpha - checks si is alphabet
 * @c: variable c
 * main - principal
 * Return: 0 
 */
int _isalpha(int c)
{
int i;
if (c >= 'a' && c <= 'z')
{
i = 1;
}
else if (c >= 'A' && c <= 'Z')
{
i = 1;
}
else
{
i = 0;
}
return (i);
}
