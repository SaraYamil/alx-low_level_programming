#include "main.h"
/**
 * _strstr - foncstion
 * @haystack: hta ana 
 * @needle: variabl
 * Return: maso9akch
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}

		if (*p == '\0')
			return (haystack);
	}

	return (0);
}

