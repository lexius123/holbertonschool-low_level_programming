#include "main.h"
#include <limits.h>

/**
 * _atoi - converts a string to an integer
 * @s: string pointer
 *
 * Return: the integer value
 */
int _atoi(char *s)
{
	int i = 0, sign = 1, result = 0;

	/* recorrer el string */
	while (s[i] != '\0')
	{
		/* contar signos */
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] == '+')
			sign *= 1;

		/* si es dígito */
		else if (s[i] >= '0' && s[i] <= '9')
		{
			/* convertir y acumular con signo */
			int digit = s[i] - '0';

			/* overflow check */
			if (sign == 1 && (result > (INT_MAX - digit) / 10))
				return (INT_MAX);
			if (sign == -1 && (result < (INT_MIN + digit) / 10))
				return (INT_MIN);

			result = result * 10 + (sign * digit);
		}
		/* si ya empezó número y se acaba */
		else if (result != 0)
			break;

		i++;
	}

	return (result);
}
