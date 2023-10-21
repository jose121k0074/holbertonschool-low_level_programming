#include "main.h"
/**
 * print_sign - check input
 * @n: variable n
 * Return: 0
 */
int print_sign(int n)
{
int i;
if (n > 0)
{
i = 1;
_putchar('+');
}
else if (n < 0)
{
i = -1;
_putchar('-');
}
else
{
i = 0;
_putchar('0');
}
return (i);
}
