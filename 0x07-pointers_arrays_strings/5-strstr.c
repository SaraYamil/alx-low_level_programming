#include "main.h"
/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */

char *_strstr(char *haystack, char *needle)
{
if (!haystack || !needle)          // Check for null pointers
  return NULL;
if (*needle == '\0')               // Check for empty needle string
    return haystack;

if (*haystack == '\0')             // Check for end of haystack string
    return NULL;

if (*haystack == *needle)
{
    char *h = haystack;
    char *n = needle;

    while (*h != '\0' && *n != '\0')
    {
        if (*h != *n)
            return _strstr(haystack + 1, needle);  // Recursive call

        h++;
        n++;
    }

    if (*n == '\0')
        return haystack;
}

return _strstr(haystack + 1, needle);  // Recursive call
}
