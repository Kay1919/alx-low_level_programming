#include "main.h"

/**
 *  * _strncat - a function that concatenates two strings.
 *   * @dest: an input string
 *    * @src: an input string
 *     * @n: an input integer
 *      * Return: A pointer to the resulting string
 **/
char *_strncat(char *dest, char *src, int n)
{
	int destlen = 0, src_len= 0, i = 0;

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}
	while(src[src_len] != '\0'
	{
		src_len++;
	}
	while(src_len)
	{
		dest[dest_len] = src[i];
		src_len--;
		i++;
		dest_len++;
	}
	dest[dest_len] = '\0';
	return (dest);
}
