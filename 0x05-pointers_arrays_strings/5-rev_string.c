#include"main.h"
/**
 * print_rev - prints a reverse of a string
 * @s: string parameter input
 * Return: Nothing
*/
void print_rev(char *s)
{
int index;
/*finds the length of string lacking a  null character*/
for (index = 0; s[index] != '\0'; ++index);
/*print char from the last index as you decrement*/
for (--index; index >= 0; --index)
_putchar(s[index]);
_putchar('\n');
}
