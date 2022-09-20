#include "main.h"

/**
 *  * print_rev - a function that prints a string, in reverse,
 *   * followed by a new line.
 *    * @s: an input string
 *     * Return: Nothing
 **/
void print_rev(char *s)
{
	int num = 0;

	while (s[num])
	{
		num++;
	}
	while (num--)
	{
		_putchar(s[num]);
	}
	_putchar('\n');
}
