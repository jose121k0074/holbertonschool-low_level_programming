#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
int alpha;

for (n = '0'; n <= '9'; n++)
{
putchar(n);
}
for (alpha = 'a'; alpha <= 'f'; alpha++)
{
putchar(alpha);
}
putchar('\n');
return (0);
}
