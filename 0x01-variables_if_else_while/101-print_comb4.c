#include <stdio.h>
/**
 * main - Prints all possible combinations of 3 digits
 * Return: Always 0 (Success)
 */
int main(void)
{
int n, m, l;
for (n = 0; n < 10; n++)
{
 for (m = n + 1; m < 10; m++)
{
for (l = m + 1; l < 10; l++)
{
putchar('0' + n);
putchar('0' + m);
putchar('0' + l);
if (n != 7 || m != 8)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}

