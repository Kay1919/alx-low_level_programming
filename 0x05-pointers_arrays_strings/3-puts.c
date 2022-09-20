#include "main.h"

/**
 * _puts - prints a string followed by a line..
 * by a new line, to stdout.
 * @str: an input string
 * Return: Nothing
 */

void _puts(char *str)
{

	int num;

	for (num = 0; str[num] != '\0'; num++)
	{
		putchar(str[num]);
	}
	putchar('\n');
}
