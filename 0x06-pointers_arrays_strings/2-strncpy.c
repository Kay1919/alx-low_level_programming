#include "main.h"

/**
 *  * _strncpy - a function that copys the strings.
 *   * @dest: an input string
 *    * @src: an input string
 *     * @n: an input integer
 *      * Return: A pointer to the resulting string
 **/
char *_strncpy(char *dest, char *src, int n)
{
	int src_len = 0, a  = 0;

	while (src[a++])
		src_len++;

	for (a = 0; src[a] && a < n; a++)
		dest[a] = src[a];

	for (a = src_len; a < n; a++)
		dest[a] = '\0';

	return (dest);
}
