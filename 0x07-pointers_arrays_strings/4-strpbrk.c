#include <stdio.h>
#include <unistd.h>

/**
 * _strpbrk - Entry point
 * @s: Input
 * @accept: Input
 * Return: Always 0
 */

char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
				return (s);
		}
		s++;
	}
	return ('\0');
}

