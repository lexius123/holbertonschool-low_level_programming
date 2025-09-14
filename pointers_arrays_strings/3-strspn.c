#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: substring
 *
 * Return: number of bytes in s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, flag;

	for (i = 0; s[i]; i++)
	{
		flag = 0;
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				flag = 1;
				break;
			}
		}
		if (!flag)
			break;
	}
	return (i);
}
