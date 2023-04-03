#include "main.h"

/**
 * _strspn - This is a function that gets the length of a prefix substring
 *
 * @c: the initial segment of
 *
 * @accept consist only of bytes from
 *
 * Return: number of bytes
 */

unsigned int _strspn(char *c, char *accept)
{
	int z = 0, x, y;

	for (x = 0; c[x] != '\0'; x++)
	{
		if (c[x] != 32)
		{
			for (y = 0; accept[y] != '\0'; y++)
			{
				if (c[x] == accept[y])
					z++;
			}
		}
		else
			return (z);
	}
		return (z);

}
