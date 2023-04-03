#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @d: memory where is stored
 * @s: memory where is copied
 * *@b: number of bytes
 *
 * Return: copied memory with n byted changed
 */

char *_memcpy(char *d, char *s, unsigned int b)
{
	int r = 0;
	int i = b;

	for (; r < i; r++)
	{
		d[r] = s[r];
		b--;
	}
	return (d);
}

