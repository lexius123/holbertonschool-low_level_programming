#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: main string
 * @needle: substring
 *
 * Return: pointer to beginning of located substring or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *h = haystack;
		char *n = needle;

		while (*h && *n && *h == *n)
		{
			h++;
			n++;
		}
		if (!*n)
			return (haystack);
		haystack++;
	}
	return (0);
}
