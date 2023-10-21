#include "main.h"
/**
 * _islower - checks is lowercase
 * main - funcion principal
 * Return: 0
 */
int _islower(int c)
{
int i;
if (c >= 'a' && c <= 'z')
{
i = 1;
}
else
{
i = 0;
}
return (i);
}
