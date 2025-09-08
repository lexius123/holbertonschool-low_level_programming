#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string pointer
 *
 * Return: the integer value
 */
int _atoi(char *s)
{
	int i = 0, sign = 1, num = 0, found = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;

		if (s[i] >= '0' && s[i] <= '9')
		{
			num = num * 10 + (s[i] - '0');
			found = 1;
		}
		else if (found)
			break;
		i++;
	}

	return (num * sign);
}
